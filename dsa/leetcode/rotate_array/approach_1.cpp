// C++ code to demonstrate the working of copy()
// and copy_n()

#include <algorithm> // for copy() and copy_n()
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // initializing source vector
  vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};

  // declaring destination vectors
  vector<int> v3(v1.size());

  // using copy_n() to copy 1st 4 elements
  std::copy(v1.begin(), v1.end(), v3.begin());

  // printing new vector
  cout << "The new vector elements entered using copy_n() : ";
  for (int i = 0; i < v3.size(); i++)
    cout << v3[i] << " ";
}