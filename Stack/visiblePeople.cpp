#include <iostream>
#include <stack>
using namespace std;

vector<int> visiblePeople(vector<int>& arr ) {
    int n = arr.size();
    stack<int> st;
    vector<int> ans(n, 0);

    ans[n - 1] = 0;
    st.push(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--) {
        int count = 0;
        while(st.size() > 0 && arr[i] > st.top()) {
            st.pop();
            count++;
        }
        if(st.size() != 0) count++;
        ans[i] = count;
        st.push(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(11);
    v.push_back(9);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> ans = visiblePeople(v);
    for (int i = 0; i < v.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}