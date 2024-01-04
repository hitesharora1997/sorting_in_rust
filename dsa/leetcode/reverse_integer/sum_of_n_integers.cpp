#include<iostream>
using namespace std;


int main() {
    int n, sum = 0;
    int i = 1;

    cin >> n;

    while (i <= n)
    {
        if ( i % 2 == 0 ) {
            sum += i;
            // std::cout << sum;
        }
            i++;
    }
    std::cout << sum;
}