#include <iostream>
using namespace std;
#include "sumatoria.cpp"

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero < 1) {
        cout << "Por favor, ingrese un número mayor o igual a 1." << endl;
    } else {
        int resultado = calcularSumatoria(numero);
        cout << "La sumatoria de los números del 1 al " << numero << " es: " << resultado << endl;
    }

    return 0;
}
