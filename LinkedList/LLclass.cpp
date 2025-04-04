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
                size++;
            }
        }

        int getAtIdx(int idx) {
            if(idx<0 || idx>=size) {
                cout<<"invalid index";
                return -1;
            }
            else if(idx == 0) return head->val;
            else if(idx==size-1) return tail->val;
            else {
                Node* temp = head;
                for(int i =1; i<=idx; i++) {
                    temp = temp->next;
                }
                return temp->val;
            }
        }

        void deletAtHead() {
            if(size == 0) {
                cout<<"list is empty";
                return;
            }
            if(size == 1) head = tail = NULL;
            head = head->next;
            size--;
        }

        void deleteAtTail() {
            if(size == 0) {
                cout<<"list is empty";
                return;
            }
            if(size == 1) head = tail = NULL;
            Node* temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }

        void deleteAtIdx(int idx) {
            if(idx<0 || idx>size) cout<<"invlid index";
            else if(idx == 0)  return deletAtHead();
            else if(idx == size-1) return deleteAtTail();
            else {
                Node* temp = head;
                for(int i =1; i<=idx-1; i++) {
                temp = temp->next;
            }
                temp->next = temp->next->next;
                size--;
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
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtHead(5);
    ll.display();
    ll.insertAtIdx(2, 50);
    ll.display();
    // cout<<ll.getAtIdx(2)<<endl;
    ll.deletAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();
}