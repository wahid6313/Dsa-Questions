#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v) {
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

//two pass solution-----------------
void sort(vector<int> &v) {
    int n = v.size();
    int noZ = 0;
    int noO = 0;
    int noT = 0;

    for(int i =0 ; i<n ; i++) {
        if(v[i] == 0) noZ++;
        if(v[i] == 1) noO++;
        else noT++; 
    }

    // filing
    for(int i =0; i<n; i++) {
        if(i < noZ) v[i] = 0;
        else if(i < (noZ + noO)) v[i] = 1;
        else v[i] = 2;
    }
    return;
}

//one pass solution - dutch flag solution--

void sort2(vector<int> &v) {
    int n = v.size();
    int low = 0;
    int mid = 0;
    int hig = n-1;

    while(mid <= hig) {
        if(v[mid] == 2) {
            int temp = v[mid];
            v[mid] = v[hig];
            v[hig] = temp;
            hig--;
        }
        else if(v[mid] == 0) {
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        else if(v[mid] == 1) {
            mid++;
        }
    }
    return;
}

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);

    display(v);

    sort2(v);
    display(v);
    
}
