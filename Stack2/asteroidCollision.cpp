#include <iostream>
#include <stack>
using namespace std;

int main() {
    int arr[] = {5,10, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;

    stack<int> st;

    for(int &a: arr) {
        while(!st.empty() && a < 0 && st.top() > 0) {
            int sum = a + st.top();

            if(sum < 0) {
                st.pop();
            } 
            else if(sum > 0) {
                a = 0;
              
            }
            else {
                st.top();
                a = 0;
            }
        }
        if(a != 0) {
            st.push(a);
        }
      
    }

    int ans = st.size();
       vector<int> result(ans);

       int i = ans - 1;
        while(!st.empty()) {
          result[i] = st.top();
          st.pop();
          i--;
        }
    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
}