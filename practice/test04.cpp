#include <iostream>

struct Osoba {
    std::string imie;
    int wiek;
};

int main() {
    Osoba jan = {"Jan", 30};
    Osoba* wskaznik_na_jana = &jan; // tworzenie wskaźnika na obiekt jan
    int tymczasowy_wiek = wskaznik_na_jana->wiek; // zapisanie pierwotnego wieku

    wskaznik_na_jana->wiek = 40; // zmiana wieku
    std::cout << wskaznik_na_jana->imie << " ma " << wskaznik_na_jana->wiek << " lat." << std::endl;
    // Wyświetla "Jan ma 40 lat."

    wskaznik_na_jana->wiek = tymczasowy_wiek; // przywrócenie pierwotnego wieku
    std::cout << wskaznik_na_jana->imie << " ma " << wskaznik_na_jana->wiek << " lat." << std::endl;
    // Wyświetla "Jan ma 30 lat."
}
