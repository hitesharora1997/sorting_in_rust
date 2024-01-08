#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 2;
    while ( i < n) {
        if (n % i == 0 ){
            std::cout << "not prime" << "\t" << n << "\t" << i << "\n";
        } else {
            std::cout << "prime" << "\t" << n << "\t" << i << "\n";
        }
        i++;
    }
}