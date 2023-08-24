#include <iostream>

int gcdRec(int a, int b){
    if (b == 0)
        return a;
    else
        return gcdRec(b, a % b);
}

int sumDigits(int n){
    int sum=0;
    while(n!=0){
        sum = sum + n % 10;
        n = n/10;
    }return sum;
}

int numDigits(int n){
    int numCount = 0;
    while(n!=0){
        n = n/10;
        numCount++;
    }return numCount;
}
void printOddEven(int n){
    if(n % 2 == 0){
        for(int i = 2; i <= n; i += 2)
            std::cout << i << " ";
    }else{
        for(int i = 1; i <= n; i += 2)
            std::cout << i << " ";
    }
}
void hailstone(int n){
    while(n != 1){
        std::cout << n << " ";
        if(n % 2 == 0)
            n /= 2;
        else
            n = 3* n + 1;
    }
    std::cout << n << std::endl;
}

int main() {
    std::cout << "gcdRec(12, 42) = " <<
              gcdRec(12, 42) << std::endl
              << "gcdRec(12, 25) = " <<
              gcdRec(12, 25) << std::endl;
    std::cout << "sumDigits(123) = " <<
              sumDigits(123) << std::endl
              << "sumDigits(971) = " <<
              sumDigits(971) << std::endl;
    std::cout << "numDigits(12345) = " <<
              numDigits(12345) << std::endl
              << "numDigits(971) = " <<
              numDigits(971) << std::endl;
    std::cout << "printOddEven(15): ";
    printOddEven(15);
    std::cout << std::endl;
    std::cout << "printOddEven(14): ";
    printOddEven(14);
    std::cout << std::endl;
    std::cout << "hailstone(13): ";
    hailstone(13);
    std::cout << std::endl;
}