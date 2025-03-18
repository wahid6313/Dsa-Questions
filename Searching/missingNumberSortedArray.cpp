#include<iostream>
using namespace std;

int main() {
    int nums[] = {1,2,3,4,5,7,8,9};
    int n = sizeof(nums)/sizeof(nums[0]);

    int lo = 0;
    int hi = n-1;

    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;

        if(nums[mid] > mid+1) hi = mid -1;
        else lo = mid + 1; 
    }
    cout<<"Missing number is: "<<lo+1;
}