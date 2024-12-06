#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include "buses.hpp"  
#include "buses.cpp"
using namespace std;

int main() {
    int numBuses = 3;        
    int distancia = 10;     
    int velocidad = 500;     

    std::vector<std::thread> hilosBuses;  
    std::vector<int> posiciones(numBuses, 0); 

    
    for (int i = 0; i < numBuses; ++i) {
        hilosBuses.push_back(std::thread(carreraBuses, i + 1, distancia, velocidad));
    }

    for (auto& hilo : hilosBuses) {
        hilo.join();
    }

    std::cout << "La carrera ha terminado!" << std::endl;
    return 0;
}
