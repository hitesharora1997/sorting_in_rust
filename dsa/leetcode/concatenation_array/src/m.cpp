#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> l = {1, 2, 1};

  vector<int> ans;
  for (int i = 0; i < l.size(); i++) {
    ans.push_back(l[i]);
  }
  for (int i = 0; i < l.size(); i++) {
    ans.push_back(l[i]);
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i];
  }
}