#include <iostream>

int main(){
    float workerdHour, price, salary;

    std::cout << "Wprowadz ilosc przepracowanych godzin: ";
    std::cin >> workerdHour;
    std::cout << std::endl << "Wprowadz pracogodzine:";
    std::cin >> price;

    salary = workerdHour * price;
    std::cout << std::endl << "Nalezne wynagrodzenie wynosi: " << salary;
return 0;
}

