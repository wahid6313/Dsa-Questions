#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int longestPalindrome(string s) {
    int n = s.size();
    int ans = 0;

    unordered_map<char, int> st;

    for(int i=0; i<n; i++) {
        st[s[i]] += 1;
    }

    bool hashOdd = false;
    for(auto &it : st) {
        if(it.second % 2 == 0) {
            ans += it.second;
        }
        else {
            ans += it.second-1;
            hashOdd = true ;
        }
    }
    if(hashOdd) ans += 1;
    return ans;

};

int main() {
    string s = "abccccdd";
    cout<<"Original string:- "<<s<<endl;


    cout << "Longest Palindrome Length: " << longestPalindrome(s) << endl;
    
}
