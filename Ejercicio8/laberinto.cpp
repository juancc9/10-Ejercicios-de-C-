#include <iostream>
#include <vector>

bool resolverLaberinto(std::vector<std::vector<int>>& laberinto, int x, int y, int finX, int finY) {
    if (x == finX && y == finY) {
        return true;
    }

    if (esValido(laberinto, x, y)) {
        laberinto[x][y] = 2;

        if (resolverLaberinto(laberinto, x + 1, y, finX, finY))  // Abajo
            return true;
        if (resolverLaberinto(laberinto, x - 1, y, finX, finY))  // Arriba
            return true;
        if (resolverLaberinto(laberinto, x, y + 1, finX, finY))  // Derecha
            return true;
        if (resolverLaberinto(laberinto, x, y - 1, finX, finY))  // Izquierda
            return true;

        laberinto[x][y] = 0;
    }

    return false;
}

bool esValido(const std::vector<std::vector<int>>& laberinto, int x, int y) {
    return (x >= 0 && x < laberinto.size() && y >= 0 && y < laberinto[0].size() && laberinto[x][y] == 0);
}
