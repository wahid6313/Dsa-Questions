#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int nums[] = {1,2,2,4,4,4,4,18,21};
    int n = sizeof(nums)/sizeof(nums[0]);
    int target = 4;

    int low = 0;
    int hi = n-1;

    bool flag = false;
    while(low<=hi) {
        int mid = low + (hi-low)/2;
        if(nums[mid] == target) {
            if(nums[mid-1] != target) {
                flag = true;
                cout<<mid;
                break;
            } else {
                hi = mid - 1;
            }
        }
        else if(nums[mid] < target) {
            low = mid + 1;
        } else {
            hi = mid - 1;
        }
        
    }
    if(flag==false) cout<<-1;

    
}