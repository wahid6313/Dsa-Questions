#include<iostream>
using namespace std;

int main () {

    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    // for(int i=0; i<=2 ; i++) {
    //     for(int j=0; j<=2; j++) {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    /////input------------------------------
    int m;
    cout<<"enter numbr of rows:";
    cin>>m;

    int n;
    cout<<"enter numbr of columns:";
    cin>>n;

    int arr[m][n];
    for(int i=0; i<=m-1; i++) {
        for(int j=0; j<=n-1; j++) {
            cin>>arr[i][j];
        }
    }
    //print

    for(int i=0; i<=m-1; i++) {
        for(int j=0; j<=n-1; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}