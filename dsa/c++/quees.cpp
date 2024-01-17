#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;

  q.push(21);
  q.push(15);
  q.push(75);

  cout << "front " << q.front() << endl;

  cout << "size " << q.size() << endl;

  q.pop();

  cout << "front " << q.front() << endl;

  cout << "size " << q.size() << endl;

  return 0;
}