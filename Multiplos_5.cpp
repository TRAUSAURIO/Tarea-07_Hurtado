#include <iostream>
using namespace std;

int main() {
    // Recorrer los números del 1 al 100
    for (int i = 1; i <= 100; ++i) {
        // Verificar si el número es múltiplo de 5
        if (i % 5 == 0) {
            // Imprimir el número
            cout << i << endl;
        }
    }
    return 0;
}
