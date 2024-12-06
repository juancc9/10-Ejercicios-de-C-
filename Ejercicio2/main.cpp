#include <iostream>
using namespace std;
#include "espejo.cpp"
#include "espejo.hpp"


int main() {
    int n;

    cout << "Ingresa el tamaño de la matriz NxN: ";
    cin >> n;

    int matriz[10][10], matrizEspejo[10][10];

    cout << "Ingresa los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento en (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matriz[i][j];
        }
    }

    generarEspejo(matriz, matrizEspejo, n);

    cout << "\nMatriz original:" << endl;
    imprimirMatriz(matriz, n);

    cout << "\nMatriz espejo (reflejada por el eje vertical):" << endl;
    imprimirMatriz(matrizEspejo, n);

    return 0;
}


