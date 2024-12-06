#include <iostream>
#include "collatz.hpp"

int longitudCollatz(int numero) {
    int longitud = 1; 
    while (numero != 1) {
        if (numero % 2 == 0) {
            numero /= 2; 
        } else {
            numero = 3 * numero + 1; 
        }
        ++longitud;
    }
    return longitud;
}

void rangoCollatz(int inicio, int fin) {
    int maxLongitud = 0;
    int numeroMax = 0;

    for (int i = inicio; i <= fin; ++i) {
        int longitud = longitudCollatz(i);
        if (longitud > maxLongitud) {
            maxLongitud = longitud;
            numeroMax = i;
        }
    }

    std::cout << "En el rango [" << inicio << ", " << fin << "], el número "
              << numeroMax << " genera la secuencia más larga con longitud "
              << maxLongitud << "." << std::endl;
}
