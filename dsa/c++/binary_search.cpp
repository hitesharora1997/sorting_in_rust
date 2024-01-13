#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int binary(int arr[], int size, int key) {

  int start = 0;
  int end = size - 1;
  int mid = (start + end) / 2;

  while (start <= end) {

    if (key == arr[mid]) {
      return mid;
    }

    if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }

    mid = (start + end) / 2;
  }
  return -1;
}

int main() {
  int even[6] = {2, 5, 7, 12, 53, 65};
  int odd[] = {91, 2, 4, 81, 5};

  sort(even, even + 6);
  sort(odd, odd + 5);

  int z = binary(even, 6, 531);
  int j = binary(odd, 5, 81);

  cout << "answer" << z << endl;
  cout << "answer" << j << endl;
  //   for (int i = 0; i < 6; i++) {
  //     cout << even[i] << endl;
  //   }
  //   sort(odd, odd + 5);

  //   for (int i = 0; i < 5; i++) {
  //     cout << odd[i] << endl;
  //   }
  return 0;
}
