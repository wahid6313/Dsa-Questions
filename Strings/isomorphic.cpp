#include<iostream>
#include<string>
using namespace std;

bool isomorphicString(string s, string t) {

    if(s.size() != t.size()) return false;

    if(s.length() != t.length()) return false;

    vector<int> v(150, 1000);
    
   //check s - t-----------
    for(int i=0; i<s.length(); i++) {
         int idx = (int)s[i];
        if(v[idx] == 1000)  v[idx] = s[i] - t[i];
        else if(v[idx] != (s[i] - t[i])) return false;
    }

    //fir se sab me value 1000 daal denge----
    for(int i = 0; i<150; i++)
    v[i] = 1000;

    //aur traverse karenge t - s -------
    for(int i=0; i<s.length(); i++) {
        int idx = (int)t[i];
        if(v[idx] == 1000) v[idx] = t[i] - s[i];
        else if(v[idx] != (t[i] - s[i])) return false;
    }
        
    return true;
}


int main() {
    string s = "egg";
    string t = "ade";

    cout<<isomorphicString(s,t);
}