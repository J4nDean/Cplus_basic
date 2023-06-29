#include <iostream>


void F(int& n){
    std::cout << n << std::endl;
}

void fun(int* t[]){
    std::cout << *t[0] <<std::endl;
}

//struct A {
//    A a; //(1)
//    A *pa; // (2)
//    B b; // (3)
//};

int main() {

    int k = 10;
    int *a = &k;
    int**b = &a;
    std::cout << k << std::endl;
    std::cout << *&b << std::endl;




//    int k = 10;
//    F(k);
//
//    int tab[] = {1,2,3,4,5}, *t = &tab[1];
//    std::cout << t[1] << " " << t[2] << std::endl;

//    int n=1;
//    int *pn=&n;
//    int &rn=n;
//    fun(&pn);

//    int tab[] = {1, 2, 3, 4, 5};
//    std::cout << tab[0] << std::endl;
//    int* p = tab + 2;
//    int result = p[0];
//    std::cout << result << std::endl;
//    int* a = tab - 1;
//    result = a[0];
//    std::cout << result;
//    return 0;
}
