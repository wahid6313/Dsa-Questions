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

// 5 3 1 2 5 1 2---------------
vector<int> nodesBetweenCriticalPoints(Node* head) {
    
} 


int main() {
    Node* a = new Node(5);
    Node* b = new Node(3);
    Node* c = new Node(1);
    Node* d = new Node(2);
    Node* e = new Node(5);
    Node* f = new Node(1);
    Node* g = new Node(2);
   
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    

    cout<<"Original List:"<<endl;
    display(a);
    

}