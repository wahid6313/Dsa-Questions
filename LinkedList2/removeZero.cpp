// 1171. Remove Zero Sum Consecutive Nodes from Linked List

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

Node* removeZero(Node* head) {
    unordered_map<int, Node *> mp;
    Node *dummyNode = new Node(0);
    int prefixSum = 0;

    dummyNode->next = head;
    mp[0] = dummyNode;

    while(head != NULL) {
        prefixSum += head->val;

        if(mp.find(prefixSum) != mp.end()) {
            Node *start = mp[prefixSum];
            Node *temp = start;

            int pSum = prefixSum;
            while(temp != head) {
                temp = temp->next;
                pSum += temp->val;

                if(temp != head) {
                    mp.erase(pSum);
                }
            }
            start->next = head->next;
        } else {
            mp[prefixSum] = head;
        }
        head = head->next;
    }
    return dummyNode->next;
}

int main() {
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(-3);
    Node *e = new Node(4);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    display(a);
    cout << endl;

    Node *ans = removeZero(a);
    display(ans);
    cout << endl;
}
