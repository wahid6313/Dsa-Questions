#include<iostream>
using namespace std;

int main () {
    int arr[] = {3,4,5,6,7};
    int* ptr = arr;
    
    // for(int i=0; i<=4; i++) {
    //     cout<<ptr[i]<<" ";
    // }
    // cout<<endl;
    // *ptr = 8;
    // for(int i=0; i<=4; i++) {
    //     cout<<ptr[i]<<" ";
    // }
    for(int i=0; i<=4; i++) {
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    ptr = arr;

    *ptr = 8;
    ptr++;
    *ptr = 9;
    ptr--;
    for(int i=0; i<=4; i++) {
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;



}