#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin>>s;

    vector<int> dic(256, -1);
    int maxLen = 0;
    int start = -1;

    for(int i =0; i<s.size(); i++) {
        if(dic[s[i]] > start) start = dic[s[i]];
        dic[s[i]] = i;
        maxLen = max(maxLen, i-start);
    }
    cout<<maxLen;
}