#include <iostream>
using namespace std;


int main() {
    int arr[] = {3,1,-4,1,2,1,};
    int n = sizeof(arr)/sizeof(arr[0]);

    

    int rightSum = 0;
    for(int i =0; i<n; i++){
        rightSum += arr[i];
    }
    int leftSum = 0;
    for(int i =0; i<n; i++) {
        rightSum -= arr[i];
        if (leftSum == rightSum) {
            cout << "Equilibrium index: " << i << endl;
            return 0;
        }
        leftSum += arr[i];
    }

    cout << "No equilibrium index found." << endl;
    return 0;
}