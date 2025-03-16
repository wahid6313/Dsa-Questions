#include <iostream>
using namespace std;

int main() {
    int nums[] = {0,1,2,3,4,5,7,8};
    int n = sizeof(nums)/sizeof(nums[0]);
    // int target = 4;

    int low = 0;
    int hi = n - 1;
    int ans = -1;
    
    while(low<=hi) {
        int mid = low + (hi-low)/2;
        
        if(nums[mid] == mid) {
            low = mid + 1;

        } else {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout<<"smallest Missing nnumber is: "<<ans;
}