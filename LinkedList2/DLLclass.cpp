#include <iostream>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
class DLL {  //user defined data structure---
    public:
        Node* head;
        Node* tail;
        int size;

        DLL() {
            head = NULL;
            tail = NULL;
            size = 0;
        }

        void insertAtTail(int val) {  // 1 2 3 4
            Node* temp = new Node(val);
            if(size == 0) head = tail = temp;
            else {
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
            size++;
        }

        void insertAtHead(int val) {  //0 1 2 3 4
            Node* temp = new Node(val);
            if(head == NULL) head = tail = temp;
            else {
                temp->next = head;
                head->prev = temp;
                head = temp;
            }
            size++;
        }

        void insertAtIdx(int idx, int val) {  // 0 1 9 2 3 4
            if(idx < 0 || idx > size) cout<<"Invalid index";
            else if(idx == 0) insertAtHead(val);
            else if(idx == size) insertAtTail(val);
            else {
                Node* t = new Node(val);
                Node* temp = head;
                for(int i = 1; i<=idx-1; i++) {
                    temp = temp->next;
                }
                t->next = temp->next;
                temp->next = t;
                t->prev = temp;
                t->next->prev = t;
                size++;
            }
        }

        void display() {
            Node* temp = head;
            while(temp != NULL) {
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};

int main() {
    DLL ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.display();
    ll.insertAtHead(0);
    ll.display();
    ll.insertAtIdx(2, 9);
    ll.display();


}