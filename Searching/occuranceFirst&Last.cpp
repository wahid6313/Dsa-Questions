#include <iostream>
using namespace std;

int main() {
    int nums[] = {1,2,4,4,4,4,4,6,7};
    int n = sizeof(nums)/sizeof(nums[0]);
    int target = 4;

    int low = 0;
    int hi = n - 1;
    int first = -1;
    int last = -1;

    while(low<=hi) {
        int mid = low + (hi-low)/2;
        if(nums[mid] == target) {
            first = mid;
            hi = mid - 1;
        }
        else if(nums[mid] < target) low = mid + 1;
        else hi = mid -1;
    }

    low = 0;
    hi = n-1;
    while(low<=hi) {
        int mid = low + (hi-mid)/2;
        if(nums[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if(nums[mid] < target) low = mid + 1;
        else hi = mid -1;
    }

    cout<<"First Occurrence Index: "<<first<<endl;
    cout<<"Last Occurrence Index: "<<last<<endl;

    return 0;
}