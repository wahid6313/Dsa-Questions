#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 9;

    int left = 0;
    int right = n-1;
    bool found = false;

    while(left<= right) {
        int sum = arr[left] + arr[right];

        if(sum == x) {
            cout<<"terget found: "<<left<<" "<<right<<endl;
            found = true;
            break;
        }
        if(sum > x) right--;
        else left++;
    }
    if(!found) cout<<"tareget not found";
    return 0;

}