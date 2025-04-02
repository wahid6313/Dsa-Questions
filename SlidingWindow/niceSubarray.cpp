// longest nice subbarray------------------

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int nums[] = {1,3,8,48,10};
    int n = sizeof(nums)/sizeof(nums[0]);

    int l = 0;
    int cur = 0;
    int maxx = 0;

    for(int r = 0; r<n; r++) {
        while((cur & nums[r]) != 0) {
            cur = cur ^ nums[l];
            l++;
        }
        maxx = max(maxx, r-l+1);
        cur = cur | nums[l];
    }
    cout<<"longest nice subarray is: "<<maxx;

}
