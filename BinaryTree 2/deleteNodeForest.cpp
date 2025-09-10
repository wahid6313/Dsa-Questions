// 1110. Delete Nodes And Return Forest ---------

#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
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

Node* deleteTreeNode(Node* root, unordered_set<int>& st, vector<Node*>& result) {
    if(root == NULL)
        return NULL;    
        
    root->left = deleteTreeNode(root->left, st, result);
    root->right = deleteTreeNode(root->right, st, result);

    if(st.find(root->val) != st.end()) {
        if(root->left != NULL)
            result.push_back(root->left);
         
        if(root->right != NULL) 
            result.push_back(root->right);

        return NULL;
    } else {
        return root;
    }
}

vector<Node*> delNodes(Node* root, vector<int>& to_delete) {
    vector<Node*> result;

    unordered_set<int> st;
    for(int &num : to_delete) {
        st.insert(num);
    }

    deleteTreeNode(root, st, result);

    if(st.find(root->val) == st.end()) {
        result.push_back(root);
    }

    return result;
}

void display(Node* root) {
    if(!root)
        return;
    queue<Node *> q;
    q.push(root);

    while(!q.empty()) {
        Node *curr = q.front();
        q.pop();

        cout << curr->val << " ";

        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> to_delete = {3, 5};

    vector<Node*> forest = delNodes(root, to_delete);

    cout << "Remaining Forests (Level Order):\n";
    for (Node* tree : forest) {
        display(tree);
        cout << endl;
    }
}