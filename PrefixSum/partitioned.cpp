#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,3,2,3,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i =1; i<n; i++) {
        arr[i] += arr[i-1];
    }
    int flag = false;
    for(int i =0; i<n; i++) {
        if(2*arr[i] == arr[n-1]) {
            flag = true;
            break;
        }
    }
    if(flag) cout<<"Yes it can be devide";
    else cout<<"it cannot be devide";
}