#include <iostream>
#include "sumatoria.hpp"
using namespace std;


int calcularSumatoria(int numero) {
    int suma = 0;
    for (int i = 1; i <= numero; ++i) {
        suma += i; 
    }
    return suma;
}
