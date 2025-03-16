#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int nums[] = {1,2,4,5,9,15,18,21};
    int n = sizeof(nums)/sizeof(nums[0]);
    int target = 9;

    int low = 0;
    int hi = n-1;


    while(low<=hi) {
        int mid = low + (hi-low)/2;
        if(nums[mid] == target) {
            cout<<mid;
            break;
        }
        else if(nums[mid] > target) {
            hi = mid - 1;
        }
        else {
            low = mid + 1;
        } 
    }

    
}