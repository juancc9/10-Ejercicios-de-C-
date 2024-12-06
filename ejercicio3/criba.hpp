#include <iostream>
#include "criba.cpp"


void cribaEratostenes(int limite) {
    std::vector<bool> esNoPrimo(limite + 1, false);

    for (int i = 2; i * i <= limite; ++i) {
        if (!esNoPrimo[i]) {
            for (int j = i * i; j <= limite; j += i) {
                esNoPrimo[j] = true;
            }
        }
    }

    std::cout << "Números primos menores o iguales a " << limite << ": ";
    for (int i = 2; i <= limite; ++i) {
        if (!esNoPrimo[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}
