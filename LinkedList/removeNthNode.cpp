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
Node* removeNthFromEnd(Node* head, int n) {
    // int len = 0;
    // Node* temp = head;
    // while(temp != NULL) {
    //     len++;
    //     temp = temp->next;
    // }
    // if(n==len) {
    //     head = head->next;
    //     return head;
    // }
    // int m = len - n + 1;
    // int idx = m-1;
    // temp = head;
    // for(int i =1; i<=idx-1; i++) {
    //     temp = temp->next;
    // }
    // temp->next = temp->next->next;
    // return head;

    //for one pass-------------------------
    Node* slow = head;
    Node* fast = head;
    
    for(int i =1; i<=n+1; i++) {
        if(fast == NULL) return head->next;
        fast = fast->next;
    }
    while(fast!=NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return head;

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
    display(a);
    removeNthFromEnd(a,3);
    display(a);
    
}