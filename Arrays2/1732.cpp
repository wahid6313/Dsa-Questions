///// find the highest altitude  /////
#include<iostream>
#include<vector>
using namespace std;

int highAltitude(vector<int> &v) {
    int n = v.size();

    int sum =0;
    int maxx = 0;
    for(int i=0; i<n; i++) {
        sum += v[i];
        if (sum > maxx) {
            maxx = sum;
        }
    }
    return maxx;
}

int main() {
    vector<int> v;
 
    v.push_back(-4);  // -5,1,5,0,-7 //-4,-3,-2,-1,4,3,2
    v.push_back(-3);
    v.push_back(-2);
    v.push_back(-1);
    v.push_back(-4);
    v.push_back(3);
    v.push_back(2);

    for(int i=0; i<=v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

   
    int result =  highAltitude(v);
    cout<<"highest altitude is:- "<<result;
}