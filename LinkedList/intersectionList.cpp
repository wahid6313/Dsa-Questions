
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
Node* intersectionList(Node* headA, Node* headB) {
    Node* tempA = headA;
    Node* tempB = headB;
    
    int lenA = 0;
    while(tempA != NULL) {
        lenA++;
        tempA = tempA->next;
    }
    int lenB = 0;
    while(tempB != NULL) {
        lenB++;
        tempB = tempB->next;
    }
    tempA = headA;
    tempB = headB;
    if(lenA > lenB) {
        int diff = lenA - lenB;
        for(int i =1; i<=diff; i++) {
            tempA = tempA->next;
        }
        while(tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
    else {
        int diff = lenB - lenA;
        for(int i =1; i<=diff; i++) {
            tempB = tempB->next;
        }
        while(tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempB;
    }
}

int main() {
    
    Node* a1 = new Node(10);
    Node* b1 = new Node(20);
    Node* c1 = new Node(30);
    Node* d1 = new Node(40);
    Node* e1 = new Node(50);

    
    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = e1;

    
    Node* x1 = new Node(100);
    Node* x2 = new Node(200);
    x1->next = x2;
    x2->next = c1;  
    cout << "First Linked List: ";
    display(a1);

    cout << "Second Linked List: ";
    display(x1);

    Node* intersection = intersectionList(a1, x1);
    if (intersection) {
        cout << "Intersection at node with value: " << intersection->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}

