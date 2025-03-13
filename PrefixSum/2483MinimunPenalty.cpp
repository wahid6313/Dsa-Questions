#include<iostream>
#include<vector>
using namespace std;

vector<int> miniPenalty(vector<int> &v) {
}

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
vector<int> vs = miniPenalty(v);
for(int i =0 ; i<vs.size(); i++) {
    cout<<vs[i]<<" ";
} cout<<endl;

}