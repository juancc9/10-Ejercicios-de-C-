#include <iostream>
using namespace std;
#include "criba.cpp"
#include "criba.hpp"


int main() {
    int numero;
    std::cout << "Ingresa un número: ";
    std::cin >> numero;

    if (numero < 2) {
        std::cout << "No hay números primos menores que " << numero << "." << std::endl;
    } else {
        cribaEratostenes(numero);
    }

    return 0;
}
