#include<iostream>
using namespace std;

int main() {
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
    };
    cout<<endl;
    cout<<"Matrix is:-"<<endl;
    for(int i=0; i<=m-1; i++) {
        for(int j=0; j<=n-1; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    };

    cout<<endl;
    cout<<"Spiral form:- "<<endl;

    int minr = 0, minc = 0;
    int maxr = m-1, maxc = n-1;

    while(minr<=maxr && minc<=maxc) {
        for(int j=minc; j<=maxc; j++) { //right
            cout<<arr[minr][j]<<" ";
        }
        minr++;

        if(minr>maxr || minc>maxc) break;
        for(int i=minr; i<=maxr; i++) { //down
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;

        if(minr>maxr || minc>maxc) break;
        for(int j=maxc; j>=minc; j--) { //left
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;

        if(minr>maxr || minc>maxc) break;
        for(int i=maxr; i>=minr; i--) { //up
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}   