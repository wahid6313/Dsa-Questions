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

Node* rotateList(Node* head , int k) {
    if(head == NULL || head->next == NULL) return head;

    int n = 0;
    Node* temp = head;
    Node* tail = NULL;
    while(temp != NULL) {
        if(temp->next == NULL) tail = temp;
        temp = temp->next;
        n++;
    }
    k = k % n;
    if(k == 0) return head;
    temp = head;

    for(int i = 1; i<n-k; i++) {
        temp = temp->next;
    }
    tail->next = head;
    head = temp->next;
    temp->next = NULL;

    return head;
}


int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    

    display(a);
    rotateList(a , 2);
    display(a);
    

}