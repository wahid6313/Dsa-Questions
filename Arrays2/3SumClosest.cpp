#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int threeSumClosest(vector<int> &v, int target) {
    int n = v.size();
    int resultSum = v[0] + v[1] + v[2];

    sort(v.begin(), v.end());

    for(int i=0; i<n-2; i++) {
        int j = i+1;
        int k = n-1;

        while(j<k) {
            int sum = v[i] + v[j] + v[k];

            if(sum == target) return target;
            if(abs(sum-target) < abs(resultSum-target)) 
            resultSum = sum;

            if(sum < 0) j++;
            else k--;
        }
    }
    return resultSum;
}

int main() {
    vector<int> v;
    v.push_back(4);    //{4, 0, 5, -5, 3, 3, 0, -4, -5}
    v.push_back(0);
    v.push_back(5);
    v.push_back(-5);
    v.push_back(3);
    v.push_back(3);
    v.push_back(0);
    v.push_back(-4);
    v.push_back(-5);
    // v.push_back(0);
    // v.push_back(0);
    // v.push_back(0);
    
    int target = 1;

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // threeSumClosest(v, target);
    cout<<threeSumClosest(v, target);

    
}