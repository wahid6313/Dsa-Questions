#include <iostream>
using namespace std;

class Node {
    public:
        int val;
        Node *left;
        Node *right;
    
        Node(int val) {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void displayTree(Node* root) {
    if(root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}
  // Diameter of a tree-------------------------------------

  int levels(Node* root) {
    if(root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
  }

  void helper(Node* root, int &maxDia) {
    if(root == NULL)
        return;
    int dia = levels(root->left) + levels(root->right);
    maxDia = max(dia, maxDia);
    helper(root->left, maxDia);
    helper(root->right, maxDia);
  }

  int diameterOfTree(Node* root) {
      int maxDia = 0;
      helper(root, maxDia);
      return maxDia;
  }

int main() {
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    

    displayTree(a);
    cout << endl;

    cout << "Diameter of the tree is: " << diameterOfTree(a) << endl;
}