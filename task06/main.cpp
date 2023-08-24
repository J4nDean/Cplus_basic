#include <iostream>


bool checkpass(const char* pass) {

    int length = 0;
    int uniqCharCount = 0;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigits = false;
    bool hasNonAlpha = false;

    //co najmniej 8 znaków
    while(pass[length] != '\0'){
        length++;
    }
    if (length < 8){
        std::cout << "To short" << std::endl;
    }
    //co najmniej 6 znaków różnych
    for (int i = 0; i < 256; ++i) {
        bool charFound = false;
        for (int j = 0; pass[j] != '\0'; ++j) {
            if (pass[j] == i){
                charFound = true;
                break;
            }
        }
        if (charFound){
            uniqCharCount++;
        }
    }
    if( uniqCharCount < 6){
        std::cout << "Too few different characters" << std::endl;
    }

    //co najmniej 1 cyfrę
    for (int i = 0; pass[i] != '\0'; ++i) {
        if ('0' <= pass[i] && pass[i] <= '9') {
            hasDigits = true;
        }
    }
    if (!hasDigits) {
        std::cout << "No digit" << std::endl;
    }
    //co najmniej 1 dużą literę
    for (int i = 0; pass[i] != '\0'; ++i) {
        if ('A' <= pass[i] && pass[i] <= 'Z') {
            hasUpper = true;
        }
    }
    if (!hasUpper) {
        std::cout << "No uppercase letter" << std::endl;
    }
    //co najmniej 1 małą literę
    for (int i = 0; pass[i] != '\0'; ++i) {
        if ('a' <= pass[i] && pass[i] <= 'z'){
            hasLower = true;
        }
    }
    if (!hasLower) {
        std::cout << "No lowercase letter" << std::endl;
    }

    for (int i = 0; pass[i] != '\0'; ++i) {
        if (!(('A' <= pass[i] && pass[i] <= 'Z') || ('a' <= pass[i] && pass[i] <= 'z') || ('0' <= pass[i] && pass[i] <= '9'))) {
            hasNonAlpha = true;
        }
    }
    if (!hasNonAlpha) {
        std::cout << "No non-alphanumeric character" << std::endl;
    }
}


int main() {
    using std::cout; using std::endl;
    const char* passes[] =
            {
                    "AbcDe93", "A1b:A1b>", "Ab:Acb<",
                    "abc123><", "Zorro@123", nullptr
            };
    for (int i = 0; passes[i] != nullptr; ++i) {
        cout << "checking " << passes[i] << endl;
        if (checkpass(passes[i])) cout << "OK" << endl;
        cout << endl;
    }
}
