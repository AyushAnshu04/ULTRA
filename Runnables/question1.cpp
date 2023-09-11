#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Dijkstra.h" // Include your Dijkstra's algorithm implementation header file here

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int numPairs = 200;
    double totalRuntime = 0.0;

    for (int i = 0; i < numPairs; ++i) {
        int source = std::rand() % numNodes;
        int target = std::rand() % numNodes; // Replace 'numNodes' with the total number of nodes in your graph

        auto start = std::chrono::high_resolution_clock::now();
        Dijkstra(source, target);

        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> runtime = end - start;

        totalRuntime += runtime.count();
    }

    std::cout << "Total runtime in seconds for " << numPairs << " random Dijkstra: " << totalRuntime << std::endl;

    return 0;
}
