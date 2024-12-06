#include <iostream>
#include <vector>

void generarTrianguloPascal(int filas) {
    std::vector<std::vector<int>> triangulo(filas);

    for (int i = 0; i < filas; ++i) {
        triangulo[i].resize(i + 1); 
        triangulo[i][0] = triangulo[i][i] = 1; 

        for (int j = 1; j < i; ++j) {
            triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
        }
    }

    std::cout << "Triángulo de Pascal con " << filas << " filas:" << std::endl;
    for (const auto& fila : triangulo) {
        for (int valor : fila) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    }
}
