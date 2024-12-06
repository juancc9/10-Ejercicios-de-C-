#include <iostream>
#include <string>
#include "frecuencia.cpp"
#include "frecuencia.hpp"  
using namespace std;
int main() {
    std::string texto;

    
    std::cout << "Ingresa una cadena de texto: ";
    std::getline(std::cin, texto);

    char resultado = caracterMasRepetido(texto);

    std::cout << "El carácter más repetido es: " << resultado << std::endl;

    return 0;
}
