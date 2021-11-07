#include <iostream>

int main() {
    int second_in, time_minut_out, time_sec_out;

    std::cout << "Wprowadz zas przejscia w secundach: " ;
    std::cin >> second_in;
    time_minut_out = second_in/60;
    std::cout << second_in << " to: " << time_minut_out << " minut i " << second_in%60 << "sekund";

    return 0;
}
