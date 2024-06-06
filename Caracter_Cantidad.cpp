#include <iostream>

int main() {
    char caracter; 
    int repeticiones; 

    // Pedir al usuario que ingrese un carácter
    std::cout << "Ingrese un carácter: ";
    std::cin >> caracter;

    // Pedir al usuario que ingrese el número de repeticiones
    std::cout << "Ingrese la cantidad de repeticiones: ";
    std::cin >> repeticiones;

    // Imprimir el carácter la cantidad de veces especificada
    int i = 0;
    while (i < repeticiones) {
        std::cout << caracter << " ";
        i++;
    }

    std::cout << std::endl; // Para añadir una nueva línea al final

    return 0;
}
