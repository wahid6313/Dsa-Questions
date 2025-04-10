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

Node* removeDuplicates(Node* head) {

    if(head == NULL || head->next == NULL) return head;

    Node* a = head;
    Node* b = head->next;

    while(b != NULL) {
        while(b != NULL && b->val == a->val) {
            b = b->next;
        }
        a->next = b;
        a = b;
        if(b != NULL) b = b->next;
        
    }
    return head;
    
}



int main() {
    Node* a = new Node(10);
    Node* b = new Node(10);
    Node* c = new Node(10);
    Node* d = new Node(20);
    Node* e = new Node(20);
    Node* f = new Node(30);
    Node* g = new Node(40);
    Node* h = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;

    display(a);
    removeDuplicates(a);
    display(a);

}