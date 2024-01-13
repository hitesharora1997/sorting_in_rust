#include <climits>
#include <iostream>
using namespace std;

void swapping(int arr[], int n) {
  int start = 0;
  int end = n - 1;

  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  for (int i = 0; i < n; i++) {

    cout << "new" << arr[i] << endl;
  }
}

int getMax(const int arr[], int n) {
  int maxi = INT_MIN;

  for (int i = 0; i < n; i++) {

    maxi = max(maxi, arr[i]);
    //     if (arr[i] > max) {
    //       max = arr[i];
    //     }
  }
  return maxi;
}

int main() {
  int arr[] = {1, 4, 0, 5, -2, 15};
  int arr1[] = {2, 4, 5, 6, 9};

  int size = sizeof(arr) / sizeof(int);

  int x = getMax(arr, size);
  cout << "biggest" << x << endl;

  swapping(arr, size);

  return 0;
}
