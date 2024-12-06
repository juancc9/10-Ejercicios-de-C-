#include <iostream>
using namespace std;
#include "ejem.hpp"
#include "ejem.cpp"


int main() {
    int resultado = sumar(5, 3);
    std::cout << "Resultado: " << resultado << std::endl;
    imprimirMensaje();
    return 0;
}
