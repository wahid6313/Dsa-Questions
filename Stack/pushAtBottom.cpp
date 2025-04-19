#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> &st) {
    stack<int> temp;
    while(st.size() > 0) {
        temp.push(st.top());
        st.pop();

    }
    while(temp.size() > 0) {
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> st;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
}