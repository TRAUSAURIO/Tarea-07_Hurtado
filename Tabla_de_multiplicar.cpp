#include <iostream>

int main() {
    int tabla;

    // Solicitar al usuario una tabla de multiplicar
    std::cout << "Ingrese el número para la tabla de multiplicar: ";
    std::cin >> tabla;

    // Imprimir la tabla de multiplicar del 1 al 12
    for(int i = 1; i <= 10; ++i) {
        int resultado = tabla * i;

          std::cout << tabla << " * " << i << " * " << resultado << std::endl;
        }

    return 0;
}