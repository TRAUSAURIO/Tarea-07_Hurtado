#include <iostream>

int main() {
    int suma = 0;  // Inicializamos el acumulador en 0

    // Bucle for que recorre los números del 1 al 100
    for (int i = 1; i <= 100; ++i) {
        suma += i;  // Añadimos el valor de i al acumulador
    }

    // Imprimimos el resultado de la suma
    std::cout << "La sumatoria de los números del 1 al 100 es: " << suma << std::endl;

    return 0;
}
