#include <iostream>
#include <iomanip> // formatting

void showPeriod(int period){
    int fromy = (period >> 25) & 127;
    int fromm = (period >> 21) & 15;
    int fromd = (period >> 16) & 31;
    int toy = (period >> 9) & 127;
    int tom = (period >> 5) & 15;
    int tod = period & 31;

    std::cout << std::setw(4) << std::setfill('0') << fromy + 2000 << '/'
              << std::setw(2) << std::setfill('0') << fromm << '/'
              << std::setw(2) << std::setfill('0') << fromd << '-'
              << std::setw(4) << std::setfill('0') << toy + 2000 << '/'
              << std::setw(2) << std::setfill('0') << tom << '/'
              << std::setw(2) << std::setfill('0') << tod;


}

int pack(int fromy, int fromm, int fromd, int toy, int tom, int tod) {
    fromy -= 2000;
    toy -= 2000;
    return(fromy << 25) | (fromm << 21) | (fromd << 16) | (toy << 9) | (tom << 5) | tod;
}

int main() {
    //   y           m          d        y       m         d
    int period = pack(2000, 2, 3, 2030, 11, 29);
    showPeriod(period);
}
