#include <iostream>
#include <thread>
#include <vector>

constexpr int size = 1000000;
std::vector<int> data(size, 1);  // Array of 1s

int result = 0;

void calculate_sum(int start, int end) {
    for (int i = start; i < end; ++i) {
        result += data[i];
    }
}

int main() {
    // Create two threads
    std::thread thread1(calculate_sum, 0, size / 2);
    std::thread thread2(calculate_sum, size / 2, size);

    // Wait for both threads to finish
    thread1.join();
    thread2.join();

    // Print the result
    std::cout << "Sum: " << result << std::endl;

    return 0;
}
