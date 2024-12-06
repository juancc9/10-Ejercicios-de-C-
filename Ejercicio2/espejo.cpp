   #include <iostream>
   #include "espejo.hpp"
    using namespace std;
void generarEspejo(int matriz[][10], int espejo[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            espejo[i][n - j - 1] = matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
