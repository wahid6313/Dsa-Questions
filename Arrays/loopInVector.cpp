#include <iostream>
#include <vector>
using namespace std;

void change(vector<int>& a) {
    a[0] = 100;
    for(int i=0; i<a.size(); i++) {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int> v;

    // cout<<"enter the value: ";
    // for(int i=0; i<5; i++) {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int i=0; i<5; i++) {
    //     cout<<v[i]<< " ";
    // }

    v.push_back(2);
    v.push_back(14);
    v.push_back(7);
    v.push_back(1);

    for(int i=0; i<v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    // sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

}