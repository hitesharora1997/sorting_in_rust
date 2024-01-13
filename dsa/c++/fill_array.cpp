#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  std::vector<int> a(10, 100);

  int arr[11];
  std::fill_n(arr, 10, 200);

  for (int i = 0; i < 11; i++) {
    cout << "array" << arr[i] << endl;
  }
  return 0;
}
