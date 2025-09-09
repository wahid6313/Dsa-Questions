// 105. Construct Binary Tree from Preorder and Inorder Traversal----
#include <iostream>
#include <vector>
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

Node* helper(vector<int>& pre, vector<int>& in, int start, int end, int &idx) {
    if(start > end)
        return NULL;

    int rootVal = pre[idx];
    int i = start;
    
    for (; i <= end; i++) {
        if(in[i] == rootVal)
            break;
    }
    idx++;

    Node *root = new Node(rootVal);
    root->left = helper(pre, in, start, i-1, idx);
    root->right = helper(pre, in, i+1, end, idx);

    return root;
}

Node* buildTree(vector<int>& pre, vector<int>& in) {
    int n = pre.size();
    int idx = 0;

    return helper(pre, in, 0, n - 1, idx);
}

void displayTree(Node* root) {
    if(!root)
        return;
    queue<Node *> que;
    que.push(root);

    while(!que.empty()) {
        Node *curr = que.front();
        que.pop();
        cout << curr->val << " ";

        if(curr->left)
            que.push(curr->left);
        if(curr->right)
            que.push(curr->right);
    }
}

int main() {
    
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Node* root = buildTree(preorder, inorder);

    cout << "Constructed Binary Tree Level Order: "<<endl;
    displayTree(root);
    cout << endl;
}