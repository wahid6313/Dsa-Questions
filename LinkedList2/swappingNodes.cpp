// 1721. Swapping Nodes in a Linked List----

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

Node* swappingNodes(Node* head, int k) {
    Node *p1 = NULL;
    Node *p2 = NULL;

    Node *temp = head;

    while(temp != NULL) {
        if(p2 != NULL) {
            p2 = p2->next;
        }
        k--;
        if(k == 0) {
            p1 = temp;
            p2 = head;
        }

        temp = temp->next;
    }
    swap(p1->val, p2->val);
    return head;
}

int main() {
    Node *a = new Node(1);  //1-2-3-4-5
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    int k = 2;

    display(a);
    cout << endl;

    Node *ans = swappingNodes(a, k);
    cout << "After swapping Nodes: ";
    display(ans);
    cout << endl;
}
