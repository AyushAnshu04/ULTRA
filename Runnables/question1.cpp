#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dijkstra.h"

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int numPairs = 200;
    double totalRuntime = 0.0;

    for (int i = 0; i < numPairs; ++i) {
        int source = std::rand() % graph.numVertices();
        int target = std::rand() % graph.numVertices();

        auto start = std::chrono::high_resolution_clock::now();
        Dijkstra(source, target);

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> runtime = end - start;

        totalRuntime += runtime.count();
    }

    std::cout << "Total runtime in seconds for " << numPairs << " random Dijkstra: " << totalRuntime << std::endl;

    return 0;
}
