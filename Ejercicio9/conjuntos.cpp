#include <iostream>
#include <vector>
#include "conjuntos.hpp"
using namespace std;


void generarSubconjuntos(const std::vector<int>& conjunto, std::vector<int>& subconjunto, int indice) {
    if (indice == conjunto.size()) {
        return;
    }

    subconjunto.push_back(conjunto[indice]);
    generarSubconjuntos(conjunto, subconjunto, indice + 1);

    subconjunto.pop_back();
    generarSubconjuntos(conjunto, subconjunto, indice + 1);
}

void mostrarSubconjuntos(const std::vector<std::vector<int>>& subconjuntos) {
    for (const auto& subconjunto : subconjuntos) {
        std::cout << "{ ";
        for (int num : subconjunto) {
            std::cout << num << " ";
        }
        std::cout << "}" << std::endl;
    }
}
