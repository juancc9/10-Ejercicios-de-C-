#include <iostream>
#include <vector>
#include "laberinto.hpp"  // Archivo de encabezado donde están los prototipos
#include "laberinto.cpp"
int main() {
    // Definir un laberinto 9x9 como ejemplo (0 = camino, 1 = pared)
    std::vector<std::vector<int>> laberinto = {
        {0, 1, 0, 0, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 1, 0, 0, 1, 0},
        {1, 1, 1, 0, 1, 0, 1, 1, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 0},
        {1, 1, 1, 1, 1, 0, 1, 1, 0},
        {0, 0, 0, 0, 1, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 1, 1, 0}
    };

    // Coordenadas de inicio (0, 0) y fin (8, 8)
    int inicioX = 0, inicioY = 0;
    int finX = 8, finY = 8;

    // Intentamos resolver el laberinto
    if (resolverLaberinto(laberinto, inicioX, inicioY, finX, finY)) {
        std::cout << "Se encontró una solución al laberinto.\n";
    } else {
        std::cout << "No hay solución al laberinto.\n";
    }

    return 0;
}
