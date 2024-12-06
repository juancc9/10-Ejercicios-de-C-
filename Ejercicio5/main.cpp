#include <iostream>
#include "collatz.hpp"
#include "collatz.cpp"
using namespace std;

int main() {
    int inicio, fin;

    std::cout << "Ingresa el inicio del rango: ";
    std::cin >> inicio;

    std::cout << "Ingresa el final del rango: ";
    std::cin >> fin;

    if (inicio > fin || inicio < 1) {
        std::cout << "El rango no es válido. Asegúrate de que inicio <= fin y ambos sean positivos." << std::endl;
    } else {
        rangoCollatz(inicio, fin);
    }

    return 0;
}
