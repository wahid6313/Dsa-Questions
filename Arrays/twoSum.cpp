#include <iostream>
using namespace std;

int main() {
    

    vector<int> v;
    int n;
    cout<<"enter array size: ";
    cin>>n;

    cout<<"Enter an array element: ";
    for(int i=0; i<n; i++) {
        int q;
        cin>>q;
        v.push_back(q);

    }
    int x;
    cout<<"Enter the target: ";
    cin>>x;

    for(int i=0; i<=v.size() -1 ; i++) {
        for(int j=i+1; j<=v.size() -1; j++) {
            if(v[i]+v[j] ==7) {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}