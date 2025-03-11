//gfg question --- 

#include<iostream>
using namespace std;

int main() {
    int arr[] = {100,180,260,310,40,535,695};

    int n = sizeof(arr)/sizeof(arr[0]);

    int res = 0;
    for(int i = 1; i<n; i++) {
        if(arr[i] > arr[i-1]) {
            res += arr[i] - arr[i-1];
        }
    }

    cout<<res;
    
}