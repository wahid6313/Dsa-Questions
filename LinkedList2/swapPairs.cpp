// 24 Swap Pairs----

#include <iostream>
using namespace std;

class Node {
    public:
        int val;
        Node *next;

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
}

Node* swapPairs(Node *head) {
    // a = head , b = head->next , c = head->next->next;
    if(!head || !head->next) {
        return head;
    }

    Node *temp = head->next;
    head->next = swapPairs(head->next->next);
    temp->next = head;

    return temp;
}

int main() {
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);

    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    cout << endl;

    Node *ans = swapPairs(a);
    display(ans);
    cout << endl;
}
