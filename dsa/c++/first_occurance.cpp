// www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM#include
// <vector>
using namespace std;

int first_occurance(vector<int> &arr, int n, int k) {
  int start = 0;
  int end = n - 1;
  int ans = -1;

  while (start <= end) {
    int mid = (start + end) / 2;
    if (k == arr[mid]) {
      ans = mid;
      end = mid - 1;
    } else if (k > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return ans;
}

int last_occurance(vector<int> &arr, int n, int k) {
  int start = 0;
  int end = n - 1;
  int ans = -1;

  while (start <= end) {
    int mid = (start + end) / 2;
    if (k == arr[mid]) {
      ans = mid;
      start = mid + 1;
    } else if (k > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
  pair<int, int> p;
  p.first = first_occurance(arr, n, k);
  p.second = last_occurance(arr, n, k);
  return p;
}
