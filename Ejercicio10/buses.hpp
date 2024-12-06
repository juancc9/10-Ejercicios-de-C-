#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

void carreraBuses(int idBus, int distancia, int velocidad);

void mostrarEstadoCarrera(const std::vector<int>& posiciones);

void esperar(int segundos);
