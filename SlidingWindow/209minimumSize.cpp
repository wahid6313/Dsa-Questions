#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 11;

    int sum = 0;
    int len = 0;
    int minLen = INT_MAX;

    int i = 0;
    int j = 0;

    while(j<n) {
        sum += arr[j];

        while(sum >= target) {
            len = j - i + 1;
            minLen = min(minLen, len);
            sum -= arr[i];
            i++;
        }
        j++;
    }

    cout<<"Minimun size subarray sum is: "<<minLen;
 
}