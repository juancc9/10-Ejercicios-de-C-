#include <iostream>
#include <vector>
#include "conjuntos.cpp"
#include "conjuntos.hpp"
using namespace std;

int main() {
    int n;

    // Ingresar el número de elementos del conjunto
    std::cout << "Ingresa el número de elementos en el conjunto: ";
    std::cin >> n;

    std::vector<int> conjunto(n);
    std::cout << "Ingresa los elementos del conjunto: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> conjunto[i];
    }

    std::vector<std::vector<int>> subconjuntos;  // Vector para almacenar todos los subconjuntos
    std::vector<int> subconjunto;  // Subconjunto actual

    // Generar los subconjuntos
    generarSubconjuntos(conjunto, subconjunto, 0);

    // Mostrar todos los subconjuntos generados
    std::cout << "Los subconjuntos posibles son: " << std::endl;
    mostrarSubconjuntos(subconjuntos);

    return 0;
}
