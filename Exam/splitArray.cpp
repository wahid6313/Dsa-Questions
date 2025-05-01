#include <iostream>
using namespace std;


int main() {
    int arr[] = {1,2,3,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total = 0;
    for(int i=0; i<n; i++) {
        total += arr[i];
    }
    if(total % 2 != 0) {
        cout<<"array cannot be partitoined"<<endl;
        return 0;
    }
    int left = 0;
    for(int i =0; i<n; i++) {
        left += arr[i];
        if(left == total / 2) {
            cout<<"split arrray: "<<i<<endl;
            return 0;
        }
    }
    cout<<"split not found:"<<endl;
    return 0;
    
}