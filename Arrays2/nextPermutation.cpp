#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &v) {
    int n = v.size();

    //find pivot element----
    int idx = -1;
    for(int i=n-2; i>=0; i--) {
        if(v[i] < v[i+1]) {
            idx = i;

            break;
        }
    }

    //when array is already greatest---
    if(idx == -1) {
        reverse(v.begin(), v.end());
        return;
    }
    // after pivot element reverse all value;---
    reverse(v.begin()+ idx+1 ,  v.end());

    //check just greater value of idx and pick up those index--
    int j = -1;
    for(int i =idx+1; i<n; i++) {
        if(v[i] > v[idx]) {
            j = i;
            break;
        }
    }

    //swap idx and ix+1 -----
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;

    return;
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(2);

    for(int i=0 ; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"next permituation: "<<endl;

    sort(v);
    for(int i=0 ; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
