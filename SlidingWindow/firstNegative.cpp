#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 4;
    int p = -1;
    int ans[n-k+1];

    for(int i = 0; i<k; i++) {
        if(arr[i] < 0) {
            p = i;
            break;
        }
        
    }
    ans[0] = (p != -1) ? arr[p] : 1;

    int i = 1;
    int j = k;
    while(j<n) {
        if(p>=i) ans[i] = arr[p];
        else {
            p = -1;
            for(int x=i; x<=j; x++) {
                if(arr[x] < 0) {
                    p = x;
                    break;
                }
            }
            
            ans[i] = (p != -1) ? arr[p] : 1;
        }
        i++;
        j++;
    }

    for(int i = 0; i<n-k+1; i++) {
        cout<<ans[i]<<" ";
    }
    
    
}