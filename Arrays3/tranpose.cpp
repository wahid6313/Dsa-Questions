#include<iostream>
using namespace std;

int main () {

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

    cout<<endl;
    for(int i=0; i<=m-1; i++) {
        for(int j=0; j<=n-1; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    

    //store the transpose---------
    int t[m][n];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            t[i][j] = arr[j][i];
        }
        cout<<endl;
    }

    //print----------
    for(int j=0; j<n; j++) {
        for(int i=0; i<m; i++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}