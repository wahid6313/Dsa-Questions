//Peak index mountain array-------------------
#include <iostream>
using namespace std;

int main() {
    int nums[] = {1,2,3,5,4,3,2,1,0};
    int n = sizeof(nums)/sizeof(nums[0]);

    int low = 0;
    int hi = n-1;

    while(low<=hi) {
        int mid = low + (hi-low)/2;

        if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) {
            cout<<mid;
            break;
        }
        else if(nums[mid] > nums[mid+1]) {
            hi = mid - 1;
        }
         else{
            low = mid + 1;
         }
    }


}