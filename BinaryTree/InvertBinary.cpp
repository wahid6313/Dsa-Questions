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

Node* invertBinaryTree(Node* root) {
    if(root == NULL)
        return 0;
    Node *temp = root->left;
    root->left = root->right;
    root->right = temp;

    invertBinaryTree(root->left);
    invertBinaryTree(root->right);

    return root;
}

int main() {
    Node *a = new Node(4);  // [4,2,7,1,3,6,9] -------
    Node *b = new Node(2);
    Node *c = new Node(7);
    Node *d = new Node(1);
    Node *e = new Node(3);
    Node *f = new Node(6);
    Node *g = new Node(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    displayTree(a);
    cout << endl;

    Node *ans = invertBinaryTree(a);
    cout << "Inverted Binary Tree is: ";
    displayTree(ans);
    cout << endl;
}