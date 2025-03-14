#include<iostream>
using namespace std;

int main() {
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 4;
    // int maxSum = INT_MIN;

    int index = 0;

    // for(int i = 0; i<=n-k; i++) {
    //     int sum = 0;
    //     for(int j = i; j<i+k; j++) {
    //         sum += arr[j];
    //     }
    //     // maxSum = max(maxSum, sum);
    //     if(maxSum < sum) {
    //         maxSum = sum;
    //         index = i;
    //     }
    // }

    int maxSum = INT_MIN;
    int pre = 0;
    for(int i =0; i<k; i++) {
        pre += arr[i];
    }
    maxSum = pre;

    int i =1;
    int j = k;
    ///Sliding Window----------------------------------
    while(j<n) {
        int currentSum = pre + arr[j] - arr[i-1];
        if(maxSum < currentSum) {
            maxSum = currentSum;
            index = i;
        }
        pre = currentSum;
        i++;
        j++;
    }

    cout<<maxSum<<endl;
    cout<<index;
}