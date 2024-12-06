#include <iostream>
#include <vector>
#include "sudoku.cpp"
#include "sudoku.hpp"  // Archivo de encabezado donde están los prototipos
using namespace std;

int main() {
    std::vector<std::vector<int>> tablero(9, std::vector<int>(9, 0));

    // Solicitar la entrada del usuario para llenar el tablero
    std::cout << "Ingresa los valores del tablero de Sudoku (0 para casillas vacías):\n";
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            std::cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": ";
            std::cin >> tablero[i][j];
        }
    }

    if (esTableroValido(tablero)) {
        std::cout << "El tablero es válido.\n";
    } else {
        std::cout << "El tablero no es válido.\n";
    }

    return 0;
}
