#include <iostream>

int main() {
    int ticket_A, pot_A,ticket_B, pot_B, ticket_C, pot_C, sumary;
    pot_A = 15;
    pot_B = 12;
    pot_C = 9;

    std::cout << "Ilos sprzedancyh biletow klasy A: ";
    std::cin >> ticket_A;
    std::cout << std::endl << "Ilos sprzedancyh biletow klasy B: ";
    std::cin >> ticket_B;
    std::cout << std::endl <<  "Ilos sprzedancyh biletow klasy C: ";
    std::cin >> ticket_C;

    sumary = ticket_A * pot_A + ticket_B * pot_B + ticket_C * pot_C;
    std::cout << std::endl <<  "Otrzymany dochod: " << sumary <<"PLN" << std::endl;

    return 0;
}
