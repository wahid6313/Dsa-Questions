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
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

Node* mergeSortedList(Node* head1, Node* head2) {
    Node* tempA = head1;
    Node* tempB = head2;

    Node* c = new Node(100);
    Node* tempC = c;

    while(tempA != NULL && tempB != NULL) {
        if(tempA->val <= tempB->val) {
            Node* t = new Node(tempA->val);
            tempA = tempA->next;
            tempC->next = t;
            tempC = t;
        }
        else {
            Node* t = new Node(tempB->val);
            tempB = tempB->next;
            tempC->next = t;
            tempC = t;
        }
    }
    if(tempA == NULL) tempC->next = tempB;
    else tempC->next = tempA;

    return c->next;
     
}


int main() {

    Node* a1 = new Node(1);
    Node* b1 = new Node(2);
    Node* c1 = new Node(4);
  
    
    a1->next = b1;
    b1->next = c1;
    
    Node* a2 = new Node(1);
    Node* b2 = new Node(3);
    Node* c2 = new Node(4);

    a2->next = b2;
    b2->next = c2;
    Node* newNode = mergeSortedList(a1, a2);
    display(newNode);

}
