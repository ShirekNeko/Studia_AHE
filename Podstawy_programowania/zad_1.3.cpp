#include <iostream>

int main() {
    float boys, girls, summary, percent;

    std::cout << "Ilosc chlopcow w klasie: ";
    std::cin >> boys;
    std::cout << std::endl << "Ilosc dziewczyn w klasie: ";
    std::cin >> girls;

    summary = boys + girls;
    percent = (boys/summary)*100;
    std::cout << std::endl << "Procentowa wartosc chlopcow w klasie: " << percent << std::endl << "Procentowa wartosc dziewczyn w klasie: " << 100-percent << std::endl;
    return 0;
}
