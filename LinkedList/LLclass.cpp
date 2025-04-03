#include <iostream>
using namespace std;

class Node {  //user defined data type---
    public:
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next = NULL;
        }

};
class LinkedList {  //user defined data structure---
    public:
        Node* head;
        Node* tail;
        int size;

        LinkedList() {
            head = NULL;
            tail = NULL;
            size = 0;
        }

        void insertAtTail(int val) {
            Node* temp = new Node(val);
            if(tail == NULL) head = tail = temp;
            else {
                tail->next = temp;
                tail = temp;
            }
            size++;
        }

        void insertAtHead(int val) {
            Node* temp = new Node(val);
            if(head == NULL) head = tail = temp;
            else {
                temp->next = head;
                head = temp;
            }
            size++;
        }

        void insertAtIdx(int idx, int val) {
            if(idx < 0 | idx > size) cout<<"Invalid index";
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
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtHead(5);
    ll.display();
    ll.insertAtIdx(2, 50);
    ll.display();
}