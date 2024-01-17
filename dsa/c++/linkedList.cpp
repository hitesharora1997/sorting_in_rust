#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;

  // constuctor
  Node(int data) {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};

void print(Node *&head) {

  Node *temp = head;

  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtHead(Node *&head, int data) {

  // new node
  Node *temp = new Node(data);

  temp->next = head;
  head = temp;
}

void insertAttail(Node *&tail, int data) {
  // new node
  Node *temp = new Node(data);
  //   tail->next = temp;
  //   tail = tail->next;

  //   while (tail->next == NULL) {
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}

void insertAtPosition(Node *&head, int position, int d) {
  Node *temp = head;
  int cnt = 1;

  while (cnt < position - 1) {
    temp = temp->next;
    cnt++;
  }

  Node *nodeToinsert = new Node(d);
  nodeToinsert->next = temp->next;
  temp->next = nodeToinsert;
}

int main() {

  Node *node1 = new Node(10);

  Node *head = node1;
  Node *tail = node1;
  print(head);

  insertAtHead(head, 12);
  print(head);

  insertAtHead(head, 15);
  print(head);

  insertAtHead(head, 200);
  print(head);

  insertAttail(tail, 209);
  print(head);

  insertAttail(tail, 109);
  print(head);

  insertAtPosition(head, 3, 91);
  print(head);

  return 0;
}
