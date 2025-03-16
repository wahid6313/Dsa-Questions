#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int x = 37;

    int low = 0;
    int hi = x;
    int ans = -1;
    while(low<=hi) {
        int mid = low + (hi-low)/2;
        long long m = (long long) mid;
        long long y = (long long)x;

        if (m*m <= x) {
            low = mid + 1;
        } else {
            hi= mid -1;
        }
    }

    cout<<"square root is: "<<hi;
}