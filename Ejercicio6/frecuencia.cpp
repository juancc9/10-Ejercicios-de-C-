#include <iostream>
#include <unordered_map>

char caracterMasRepetido(const std::string& cadena) {
    std::unordered_map<char, int> frecuencia; 

    for (char c : cadena) {
        frecuencia[c]++;
    }

    char masRepetido = cadena[0];
    int maxFrecuencia = 0;
    for (const auto& par : frecuencia) {
        if (par.second > maxFrecuencia) {
            maxFrecuencia = par.second;
            masRepetido = par.first;
        }
    }

    return masRepetido;
}
