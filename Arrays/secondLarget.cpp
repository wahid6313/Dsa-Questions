#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 23 ,32,31, 32,45, 45,  45};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int secondMax = INT_MIN;

    for(int i=1; i<n-1; i++) {
        if(max<arr[i]) {
            secondMax = max;
            max = arr[i];
        }
        else if (max != arr[i] && secondMax < arr[i]) {
            secondMax = arr[i];
        }
     }
    cout<<"Second Maximum value: "<<secondMax;
}