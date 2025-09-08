// 1669. Merge In Between Linked Lists----

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

Node* mergeInBetweenLL(Node* list1, Node* list2, int a, int b) {
    Node *left = NULL;
    Node *right = list1;

    for (int i = 0; i <= b; i++) {
        if(i == a-1) {
            left = right;
        }

        right = right->next;
    }
    left->next = list2;
    Node *temp = list2;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = right;

    return list1;
}

int main() {
    Node *a1 = new Node(10);  //10 - 1 - 13 - 6 - 9 - 5
    Node *b1 = new Node(1);
    Node *c1 = new Node(13);
    Node *d1 = new Node(6);
    Node *e1 = new Node(9);
    Node *f1 = new Node(5);

    a1->next = b1;
    b1->next = c1;
    c1->next = d1;
    d1->next = e1;
    e1->next = f1;

    Node *a2 = new Node(50);  // 50 - 51 - 52
    Node *b2 = new Node(51);
    Node *c2 = new Node(52);

    a2->next = b2;
    b2->next = c2;

    cout << "List 1: ";
    display(a1);
    cout << endl;

    cout << "List 2: ";
    display(a2);
    cout << endl;

    int a = 3;
    int b = 4;

    Node *ans = mergeInBetweenLL(a1, a2, a, b);
    cout << "Merge In Between Linked Lists:- "<<endl;
    display(ans);
    cout << endl;
}
