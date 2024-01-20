#include "declarations.hpp"

int main(){
    char mode;
    int numberOne, numberTwo;
    std::cout << "Give me two numbers: ";
    std::cin >> numberOne >> numberTwo;

    std::cout << "What mode? (A), (S), (M), (D): ";
    std::cin >> mode;

    if(mode == 'A'){
        std::cout << add(numberOne, numberTwo);
    } else if (mode == 'S'){
        std::cout << subtract(numberOne, numberTwo);
    } else if (mode == 'M'){
        std::cout << multiply(numberOne, numberTwo);
    } else if (mode == 'D'){
        std::cout << divide(numberOne, numberTwo);
    }
}