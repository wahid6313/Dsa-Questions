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

vector <Node*> splitList(Node* head, int k) {
    //find length-----
    int n = 0;
    Node* temp = head;
    while(temp) {
        temp = temp->next;
        n++;
    }
    vector<Node*> ans;
    int size = n/k;
    int rem = n%k;
    temp = head;

    while(temp != NULL) {
        Node* c = new Node(100);
        Node* tempC = c;
        int s = size;
        if(rem > 0) s++;
        rem--;

        for(int i=1; i<=s; i++) {
            tempC->next = temp;
            temp = temp->next;
            tempC = tempC->next;
        }
        tempC->next = NULL;
        ans.push_back(c->next);
    }
    if(ans.size() < k) {
        int extra = k - ans.size();
        for(int i=1; i<=extra; i++) {
            ans.push_back(NULL);
        }
    }
    return ans;
}


int main() {
    Node* a = new Node(4);
    Node* b = new Node(2);
    Node* c = new Node(1);
    Node* d = new Node(3);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;

    cout<<"Original List:"<<endl;
    display(a);
    vector<Node*> output = splitList(a, 3);

    cout<<"\nSplit Lists:\n";
    for(int i=0; i<output.size(); i++) {
        display(output[i]);
    }
    

}