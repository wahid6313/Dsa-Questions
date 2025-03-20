#include <iostream>
#include <vector>
using namespace std;

int findMiddleIndex(vector<int> &v) {
    int n = v.size();

    int sum = 0;
    int leftSum = 0;


    for(int i =0; i<n; i++) {
        sum = sum + v[i];
    }
    for(int i =0; i<n; i++) {
       int rightSum = sum-leftSum-v[i];

        if(leftSum == rightSum) {
            return i;
        }
        leftSum = leftSum + v[i];
     }
    return -1;
}

int main() {

    vector<int> v;
 
    v.push_back(2);  
    v.push_back(3);
    v.push_back(-1);
    v.push_back(8);
    v.push_back(4);
    

    for(int i=0; i<=v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int result = findMiddleIndex(v);
    if (result != -1) {
        cout << "Middle Index: " << result << endl;
    } else {
        cout << "No middle index found" << endl;
    }

      
}