#include <iostream>
using namespace std;

void towerofhanio(int n, char src, char helper, char dest) {
  if (n == 1) {
    cout << "tranfer disk " << n << " from " << src << " to " << dest << endl;

    return;
  }

  towerofhanio(n - 1, src, dest, helper);
  cout << "tranfer disk " << n << " from " << src << " to " << dest << endl;
  towerofhanio(n - 1, helper, src, dest);
}

int main() {

  int n = 3;
  towerofhanio(n, 'S', 'H', 'D');
  return 0;
}