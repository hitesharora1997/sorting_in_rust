#include<iostream>
using namespace std;

class node {
    int data;
    node *left;
    node *right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    };
};

int main() {
    return 0;
}