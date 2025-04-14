#include <iostream>
using namespace std;

class Node {
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next = NULL;
        }
};

void display(Node* head) {
    while(head != NULL) {
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}




int main() {
    Node* a = new Node(4);
    Node* b = new Node(2);
    Node* c = new Node(1);
    Node* d = new Node(3);
    
    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    // Node* newHead = rotateList(a , 3);
    // display(newHead);
    

}