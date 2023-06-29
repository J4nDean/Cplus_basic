#include <iostream>

void rekur(const char* nap){
    if (*nap != 'D'){
//        std::cout << nap << std::endl;
        rekur(nap+1);
        std::cout << *nap ;
    }
}

int main() {
    rekur("ABCD");
    std::cout << "" <<std::endl;
    const char* nap= "ABCDEFG";
    nap = nap+4;
    std::cout << *nap << std::endl;
    nap = nap-4;
    std::cout << *nap << std::endl;

}