#include <iostream>

#define ENG

#ifdef ENG
#define PROMPT_MSG "Enter a natural number (0 if done): "
    #define RESULT_MSG "Max sum of digits was "
    #define WITH_NUM_MSG " for "
    #define ZERO_MSG "0"
#elif defined(POL)
    #define PROMPT_MSG "Podaj liczbę naturalną (jeśli chcesz przerwać program, wprowadź 0): "
    #define RESULT_MSG "Maksymalna suma cyfr to "
    #define WITH_NUM_MSG " z liczbą "
    #define ZERO_MSG "0"
#endif

int main() {
    int a;
    int maxSum = 0;
    int tmp;
    int finalSum = 0;
    int finalnum = 0;

    while(a != 0){
        std::cout << PROMPT_MSG << std::endl;
        std::cin >> a;

        int cur = a;

        do {
            tmp = 0;
            tmp += (cur % 10);
            cur -= cur % 10;
            maxSum += tmp;
        } while (cur /= 10);

        if(maxSum > finalSum){
            finalnum = a;
            finalSum = maxSum;
        }

        maxSum = 0;
    }

    std::cout << RESULT_MSG + std::to_string(finalSum) + WITH_NUM_MSG + std::to_string(finalnum) << std::endl;
    return 0;
}
