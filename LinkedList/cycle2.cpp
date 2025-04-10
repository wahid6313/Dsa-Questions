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
Node* linkedListCycle2(Node* head) {
    Node* slow = head;
    Node* fast = head;

   

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            Node* temp = head;
            while(temp != slow) {
                slow = slow->next;
                temp = temp->next;
            }
            return temp;
        }
    }

    return NULL;
    
}


int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->next = c;
   

    if(linkedListCycle2(a)) {
        cout<<"Cycle detected."<< linkedListCycle2(a)->val << endl;
    }
    else{
        cout<<"No cycle."<<endl;
        display(a);
    }
}