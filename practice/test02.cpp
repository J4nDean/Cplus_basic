#include <iostream>
#include <cstring>

class A {
    char* arr;
public:
    A(const char* str = "") {
        arr = new char[strlen(str) + 1];
        strcpy(arr, str);
    }

    A(const A& other) {
        arr = new char[strlen(other.arr) + 1];
        strcpy(arr, other.arr);
    }


    A& operator=(const A& other) {
        if (this != &other) {
            delete[] arr;
            arr = new char[strlen(other.arr) + 1];
            strcpy(arr, other.arr);
        }
        return *this;
    }

    const char* getArr() const {
        return arr;
    }
};

int main() {
    A obj1("Hello");
    A obj2("World");

    std::cout << "obj1: " << obj1.getArr() << std::endl;
    std::cout << "obj2: " << obj2.getArr() << std::endl;

    // Wywołanie operatora przypisania dla obj2, przypisując wartość obj1
    obj2 = obj1;

    std::cout << "Po przypisaniu:" << std::endl;
    std::cout << "obj1: " << obj1.getArr() << std::endl;
    std::cout << "obj2: " << obj2.getArr() << std::endl;

    return 0;
}

