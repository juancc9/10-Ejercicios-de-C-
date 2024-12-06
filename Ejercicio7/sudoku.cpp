#include <iostream>
#include <vector>
#include <unordered_set>

// Función para verificar si el tablero es válido según las reglas del Sudoku
bool esTableroValido(const std::vector<std::vector<int>>& tablero) {
    return esValidoFila(tablero) && esValidoColumna(tablero) && esValidoSubcuadro(tablero);
}

// Función para verificar que no haya duplicados en las filas
bool esValidoFila(const std::vector<std::vector<int>>& tablero) {
    for (int i = 0; i < 9; ++i) {
        std::unordered_set<int> numeros;
        for (int j = 0; j < 9; ++j) {
            int num = tablero[i][j];
            if (num != 0) {  // Solo verificamos los números diferentes de cero
                if (numeros.find(num) != numeros.end()) {
                    return false;  // Si el número ya está, no es válido
                }
                numeros.insert(num);
            }
        }
    }
    return true;
}

// Función para verificar que no haya duplicados en las columnas
bool esValidoColumna(const std::vector<std::vector<int>>& tablero) {
    for (int j = 0; j < 9; ++j) {
        std::unordered_set<int> numeros;
        for (int i = 0; i < 9; ++i) {
            int num = tablero[i][j];
            if (num != 0) {
                if (numeros.find(num) != numeros.end()) {
                    return false;
                }
                numeros.insert(num);
            }
        }
    }
    return true;
}

bool esValidoSubcuadro(const std::vector<std::vector<int>>& tablero) {
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            std::unordered_set<int> numeros;
            for (int m = 0; m < 3; ++m) {
                for (int n = 0; n < 3; ++n) {
                    int num = tablero[i + m][j + n];
                    if (num != 0) {
                        if (numeros.find(num) != numeros.end()) {
                            return false;
                        }
                        numeros.insert(num);
                    }
                }
            }
        }
    }
    return true;
}
