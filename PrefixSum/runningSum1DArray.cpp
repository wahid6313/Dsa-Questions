#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int> &v) {
    int n = v.size();

    // vector<int> run(n);
    // run[0] = v[0];
    
    for(int i=1; i<n; i++) {
        // run[i] = v[i] + run[i-1];

        v[i] = v[i] + v[i-1];

    }
    return v;
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> vs = runningSum(v);
    for(int i=0; i<vs.size(); i++) {
        cout<<vs[i]<<" ";
    }
    cout<<endl;
}