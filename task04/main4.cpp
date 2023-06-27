#include <iostream>
#include <iomanip> // formatting

void showPeriod(int period);

int pack(int fromy, int fromm, int fromd,
         int toy, int tom, int tod);

int main() {
                    //   y           m          d        y       m         d
    int period = pack(2000, 2, 3, 2127, 11, 29);
    showPeriod(period);
}