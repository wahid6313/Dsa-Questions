#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool checkFreq(string &s) {
        int arr[26] = {0};
        for(char &ch: s) {
            arr[ch - 'a']++;
            if(arr[ch-'a'] > 1) {
                return true;
            }
        }
        return false;
    }

    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()) return false;
        if(s == goal) {
            return checkFreq(s);
        }
        vector<int> idx;
        for (int i = 0; i < s.length(); i++) {
            if(s[i] != goal[i]) {
                idx.push_back(i);
            }
        }
        if(idx.size() != 2) {
            return false;
        }
        swap(s[idx[0]], s[idx[1]]);

        return s == goal;
    }
};

int main() {
    Solution sol;

    // Test cases
    string s1 = "ab", goal1 = "ba";
    cout << "Example 1: " << boolalpha << sol.buddyStrings(s1, goal1) << endl; // true

    string s2 = "ab", goal2 = "ab";
    cout << "Example 2: " << boolalpha << sol.buddyStrings(s2, goal2) << endl; // false

    string s3 = "aa", goal3 = "aa";
    cout << "Example 3: " << boolalpha << sol.buddyStrings(s3, goal3) << endl; // true

    string s4 = "abcd", goal4 = "abdc";
    cout << "Example 4: " << boolalpha << sol.buddyStrings(s4, goal4) << endl; // true

    string s5 = "abcd", goal5 = "abcf";
    cout << "Example 5: " << boolalpha << sol.buddyStrings(s5, goal5) << endl; // false

    return 0;
}
