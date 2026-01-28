// #include <iostream>
// #include <sstream>
// #include <queue>
// #include <string>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

        

// void display(Node* root) {
//     if (!root) {
//         cout << "Empty Tree\n";
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* curr = q.front();
//         q.pop();

//         if (curr) {
//             cout << curr->val << " ";
//             q.push(curr->left);
//             q.push(curr->right);
//         } else {
//             cout << "null ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     // Build tree: [1,2,3,null,null,4,5]
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->right->left = new Node(4);
//     root->right->right = new Node(5);

//     string serialized = serialize(root);
//     cout << "Serialized:\n" << serialized << endl;
//     cout << endl;
//     Node *newRoot = deserialize(serialized);
//     cout << "Deserialized Tree:\n";
//     display(newRoot);
// }
