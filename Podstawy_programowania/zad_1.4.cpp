#include <iostream>

int main() {
    float ticet_normal, ticket_kids, summary;

    std::cout << "Ilosc sprzedanych biletow normalnych: ";
    std::cin >> ticet_normal;
    std::cout << std::endl << "Ilosc sprzedanych biletow ulgowych: ";
    std::cin >> ticket_kids;

    summary = ticet_normal * 10 + ticket_kids * 6;
    std::cout << std::endl;
    std::cout << "Sprzedane bilety dla doroslych: " << ticet_normal << std::endl;
    std::cout << "Sprzedane bilety dla dzieci: " << ticket_kids << std::endl;
    std::cout << "Zysk kasy brutto: " << summary << std::endl;
    std::cout << "Zysk kasy netto: " << summary*0.2 << std::endl;
    std::cout << "Kwota zap³acona dystrybutorowi: " << summary*0.8 << std::endl;

    return 0;
}

