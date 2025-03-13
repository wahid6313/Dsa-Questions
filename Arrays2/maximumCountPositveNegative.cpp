#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxPosNeg(vector<int> &nums) {
    int n = nums.size();
    
    int left = 0;
    int right = n - 1;
    int posIdx = n;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > 0) {
            posIdx = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }


    left = 0, right = n-1;
    int zeroIdx = n;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] >= 0) {
            zeroIdx = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return max(zeroIdx, n - posIdx);
}

int main() {
    vector<int> v;
    v.push_back(-3);   //-2,-1,-1,1,2,3     ,    -3,-2,-1,0,0,1,2
    v.push_back(-2);  
    v.push_back(-1);  
    v.push_back(5);  
    v.push_back(20);  
    v.push_back(66);  
    v.push_back(1344);  

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<< " ";
    }
    cout<<endl;

    cout<<maxPosNeg(v);
    


}

