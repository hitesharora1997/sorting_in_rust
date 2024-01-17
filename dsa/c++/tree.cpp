#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class node {
public:
  int data;
  node *left;
  node *right;

  node(int d) {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  };
};

node *buildTrees(node *root) {

  cout << "Enter the data " << endl;
  int data;
  cin >> data;
  root = new node(data);

  if (data == -1) {
    return NULL;
  }

  cout << "Enter data for inseting in the left of " << data << endl;
  root->left = buildTrees(root->left);
  cout << "Enter data for inserting in the right of " << data << endl;
  root->right = buildTrees(root->right);

  return root;
}

void levelOrderTraversal(node *root) {
  queue<node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {
    node *temp = q.front();
    q.pop();

    if (temp == NULL) {
      cout << endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";
      if (temp->left != NULL) {
        q.push(temp->left);
      }

      if (temp->right != NULL) {
        q.push(temp->right);
      }
    }
  }
}

int main() {

  node *root = NULL;

  // creating a
  root = buildTrees(root);
  cout << "Printing the level" << root << endl;
  levelOrderTraversal(root);

  return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 71 -1 -1 -1