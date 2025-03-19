// Input:
// N = 2
// Output: 
// 00 01 11 10
// Explanation: 
// 00 and 01 differ by one bit.
// 01 and 11 differ by one bit.
// 11 and 10 also differ by one bit.

#include <iostream>
#include <string>

using namespace std;

vector<string> grayCode(int n) {
    vector<string> result;
    if(n == 1) return {"0", "1"};

    vector<string> prev = grayCode(n-1);

    for(int i = 0; i<prev.size(); i++) {
        result.push_back("0" + prev[i]);
    }
    for(int i = prev.size(); i>=0; i--) {
        result.push_back("1" + prev[i]);
    }

    return result;
}

int main() {
    int n = 3;
    vector<string> ans = grayCode(n);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}