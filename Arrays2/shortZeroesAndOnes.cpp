#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v) {
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int> &v) {
    int n = v.size();
    int noO = 0;
    int noZ = 0;

    for(int i=0; i<n; i++) {
        if(v[i] == 0) noZ++;
        else noO++;
    }

    //fillinig
    for(int i=0; i<n; i++) {
        if(i<noZ) v[i] = 0;
        else v[i] = 1;
    }
    return;
}

void sort2(vector<int> &v) {
    int n = v.size();
    int i=0;
    int j= n-1;

    while(i<j) {
        if(v[j] == 1) j--;
        else if(v[i] == 0) i++;
        // if(i>j) break;
        else if(v[i] == 1 && v[j] == 0) {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    return;
}



int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);

    display(v);

    // sort(v);
    // display(v);


// solution using two pointers:-
    cout<<"solution using two pointers:-"<<endl;
    sort2(v);
    display(v);
}
