#include <iostream>
#include <stack>
using namespace std;

int main() {
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int ans[n];
    stack<int> st;

    ans[0] = -1;
    st.push(arr[0]);

    for (int i = 1; i < n; i++) {
        while(st.size() > 0 && arr[i] > st.top()) {
            st.pop();
        }
        if(st.size() == 0) ans[i] = -1;
        else
            ans[i] = st.top();

        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}