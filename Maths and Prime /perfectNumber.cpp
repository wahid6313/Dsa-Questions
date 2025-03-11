#include<iostream>
using namespace std;

int perfectNumber(int n){
    int ans = 0;

        for(int i = 1; i <= n / 2; i++) {
            if(n % i  == 0) {
                ans += i;
            }
        }
        if(ans == n) return true;
        return false;
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;

    cout << (perfectNumber(n) ? "Yes it is a perfect number." : "No it is not a perfect number.") << endl;
}