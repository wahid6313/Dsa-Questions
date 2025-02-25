#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(8);

    // cout<<v[0]<<" ";
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    cout<<"size of: "<<v.size()<<endl;
    cout<<"capacity of: "<<v.capacity();
    
}
