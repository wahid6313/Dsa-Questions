#include<iostream>
using namespace std;

int main() {
    int arr[] = {10,5,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 100;
    if(k<=1) return 0;

        int i= 0;
        int j = 0;
        int count = 0;
        int product = 1;

        while(j<n) {
            product *= arr[j];

            while(product >= k) {
                product /= arr[i];
                i++;
            }
            count += (j-i+1);
            j++;
        }

        cout<<"Subarray product less than K is: "<<count;
    
 
}