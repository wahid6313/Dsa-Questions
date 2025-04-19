#include <iostream>
#include <stack>
using namespace std;

void displayRec(stack<int> &st) {
    if(st.size() == 0) return ;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRec(st);
    st.push(x);
}

void display(stack<int> &st) {
    if(st.size() == 0) return ;
    int x = st.top();
    
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pushAtBottom(stack<int> &st, int val) {
    if(st.size() == 0) {
        st.push(val);
        return;
    };
    int x = st.top();
    st.pop();
    pushAtBottom(st, val);
    st.push(x);
}

void reverse(stack<int> &st) {
    if(st.size() == 1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}

int main() {
    stack<int> st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // displayRec(st);
    cout<<endl;
    display(st);
    cout<<endl;
    // pushAtBottom(st, -80);
    // display(st);
    reverse(st);
    display(st);
}