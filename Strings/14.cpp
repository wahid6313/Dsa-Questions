///longest common prefix /////
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string> &str) {
    int n = str.size();
    if(n == 1) return str[0];

    sort(str.begin(), str.end());
    string first = str[0];
    string last = str[n-1];
    string s = "";

    for(int i=0; i<first.size(); i++) {
        if(first[i] == last[i]) {
            s += first[i];
        }
        else return s;
    }
    return s;

}


int main() {
    vector<string> v;

    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    for(int i =0; i<v.size(); i++) {
        cout<<v[i]<< " ";
    }
    cout<<endl;

    sort(v.begin(), v.end());
    for(int i =0; i<v.size(); i++) {
        cout<<v[i];
        cout<<endl;
    }


    cout<<longestCommonPrefix(v);


}