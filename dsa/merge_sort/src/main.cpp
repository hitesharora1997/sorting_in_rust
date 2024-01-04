#include <iostream>
#include <vector>
#include <thread>

const int arraySize = 1000;
const int numThreads = 4;

std::vector<int> dataArray(arraySize, 0);

// Function for each thread to update its assigned portion of the array
void updateArray(int threadId) {
    int startIdx = threadId * (arraySize / numThreads);
    int endIdx = (threadId + 1) * (arraySize / numThreads);

    for (int i = startIdx; i < endIdx; ++i) {
        // Access and update the array
        dataArray[i] += threadId;
    }
}

int main() {
    std::vector<std::thread> threads;

    // Create and launch threads
    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(updateArray, i);
    }

    // Join threads
    for (auto& thread : threads) {
        thread.join();
    }

    // Print the updated array
    for (int i = 0; i < arraySize; ++i) {
        std::cout << dataArray[i] << " ";
    }

    return 0;
}
