#include<iostream>
using namespace std;


int main() {
    int n,sum = 0;
    int i = 1;
    cin >> n;

    while( i <= n ) {
        sum += i;
        i++;
    }
    std::cout << sum << endl;
}