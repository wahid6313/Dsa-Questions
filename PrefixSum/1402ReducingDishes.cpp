#include<iostream>
#include<vector>
using namespace std;

int reducingDishes(vector<int> &v) {
    int n = v.size();
    sort(v.begin(), v.end());

    int suf[n];
    suf[n-1] = v[n-1];
    for(int i = n-2; i>=0; i--) {
        suf[i] = suf[i+1] + v[i];
    }

    int idx = -1;
    for(int i = 0; i<n; i++) {
        if(suf[i] > 0) {
            idx = i;
            break;
        }
    }

    if(idx == -1) return 0;

    int max = 0;
    int x = 1;
    for(int i =idx; i<n; i++) {
        max = max + v[i]*x;
        x++;
    }
    return max;


}

int main() {
    vector<int> v;

    v.push_back(-1);
    v.push_back(-8);
    v.push_back(0);
    v.push_back(5);
    v.push_back(-9);
    
cout<<"Output is: "<<reducingDishes(v);

}