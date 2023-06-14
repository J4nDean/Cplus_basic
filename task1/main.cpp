#include <iostream>

int main() {

    int a;
    int max;
    int maxC;
    int min;
    int minC;

    while(a != 0){
        std::cout << "Podaj liczbe: (chcesz przerwac program wprowadz 0) " << std::endl;
        std::cin >> a;

        if(a != 0){
            if(a > max){
                max = a;
                maxC = 1;
            }else if(a == max){
                maxC++;
            }
        }

        if(a != 0){
            if(a < min){
                min = a;
                minC = 1;
            }else if(a == min){
                minC++;
            }
        }
    }
    std::cout << "Max liczba: " << max << ", " << maxC << " razy" << std::endl;
    std::cout << "Min liczba: " << min << ", " << minC << " razy" << std::endl;
    return 0;
}
