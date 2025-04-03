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
        void insertAtEnd(int val) {
            Node* temp = new Node(val);
            if(tail == NULL) head = tail = temp;
            else {
                tail->next = temp;
                tail = temp;
            }
            size++;
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
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.display();
}