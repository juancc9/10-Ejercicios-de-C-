
#include <iostream>
#include "pascal.hpp"
#include "pascal.cpp" 

int main() {
    int filas;
    std::cout << "Ingresa la cantidad de filas para el Triángulo de Pascal: ";
    std::cin >> filas;

    if (filas <= 0) {
        std::cout << "La cantidad de filas debe ser mayor a 0." << std::endl;
    } else {
        generarTrianguloPascal(filas);
    }

    return 0;
}
