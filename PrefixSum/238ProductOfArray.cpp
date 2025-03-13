#include<iostream>
#include<vector>
using namespace std;

vector<int> productOfArray(vector<int> &v) {
    int n = v.size();

    vector<int> pre(n);
    vector<int> suf(n);
    // vector<int> ans(n);

    int p = v[0];
    
    pre[0] = 1;

    //prefix---
    for(int i = 1 ; i<n ; i++) {
        pre[i] = p;
        p *= v[i];
    }

    //suffix
    p = v[n-1];
    // suf[n-1] = 1;
    for(int i = n-2; i>=0; i--) {
        // suf[i] = p;
        pre[i] = pre[i]*p;
        p *= v[i];
    }

    //answer---
    // for(int i=0; i<n; i++) {
    //     pre[i] = pre[i] * suf[i];
    // }

    return pre;


}

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
vector<int> vs = productOfArray(v);
for(int i =0 ; i<vs.size(); i++) {
    cout<<vs[i]<<" ";
} cout<<endl;

}