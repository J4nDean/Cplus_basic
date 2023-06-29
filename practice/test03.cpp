#include <iostream>

class Liczba {
public:
    int wartosc;

    Liczba(int wartosc) : wartosc(wartosc) {}

    Liczba operator+(const Liczba& inna) {
        return Liczba(wartosc + inna.wartosc);
    }

    friend std::ostream& operator<<(std::ostream& os, const Liczba& liczba) {
        os << liczba.wartosc;
        return os;
    }
};

struct Osoba {
    std::string imie;
    std::string nazwisko;
    int wiek;

    std::string przedstaw_sie() {
        return "Nazywam sie " + imie + " " + nazwisko + " i mam " + std::to_string(wiek) + " lat.";
    }
};

struct Student : Osoba {
    std::string uczelnia;

    double znizkaNaSilownie() {
        if (wiek < 26) {
            return 0.05;
        } else {
            return 0.0;
        }
    }
};

int main() {
    Student jan = {"Jan", "Kowalski", 23, "Uniwersytet Warszawski"};
    std::cout << jan.przedstaw_sie() << std::endl;
    std::cout << "Znizka na silownie: " << jan.znizkaNaSilownie() * 100 << "%" << std::endl;
    std::cout << Liczba(12) << std::endl;
    return 0;
}
