#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int die1 = std::rand() % 6 + 1;
    int die2 = std::rand() % 6 + 1;

    std::cout << "Die 1: " << die1 << std::endl;
    std::cout << "Die 2: " << die2 << std::endl;

    if (die1 == die2) {
        std::cout << "El usuario ha ganado (mismo número)." << std::endl;
    } else if (die1 + die2 == 11) {
        std::cout << "El usuario ha ganado (suma 11)." << std::endl;
    } else {
        std::cout << "El usuario ha perdido." << std::endl;
    }

    return 0;
}
