#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
using namespace std;

std::mutex mtx;  // ese es para la sincronización

// Función que simula la carrera de un bus
void carreraBuses(int idBus, int distancia, int velocidad) {
    int posicion = 0;
    while (posicion < distancia) {
        std::this_thread::sleep_for(std::chrono::milliseconds(velocidad));  
        posicion += 1;  
        mtx.lock();
        std::cout << "Bus " << idBus << " ha recorrido " << posicion << " unidades." << std::endl;
        mtx.unlock();
    }
    mtx.lock();
    std::cout << "Bus " << idBus << " ha llegado a la meta!" << std::endl;
    mtx.unlock();
}


void mostrarEstadoCarrera(const std::vector<int>& posiciones) {
    mtx.lock();
    for (int i = 0; i < posiciones.size(); ++i) {
        std::cout << "Bus " << i + 1 << ": " << posiciones[i] << " unidades recorridas" << std::endl;
    }
    mtx.unlock();
}

void esperar(int segundos) {
    std::this_thread::sleep_for(std::chrono::seconds(segundos));
}

