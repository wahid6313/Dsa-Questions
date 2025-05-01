#include<iostream>
using namespace std;

int main() {
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;
    int maxSum = INT_MIN;
    int index = 0;
    int pre = 0;


    for(int i =0; i<k; i++) {
        pre += arr[i];
    }
    maxSum = pre;

    int i = 1;
    int j = k;
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
    cout<<index<<endl;
}