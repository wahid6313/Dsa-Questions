#include<iostream>
using namespace std;

int keyKeyboard(int n){
    if (n == 1) return 0; 

        int steps = 0;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {  // If i is a factor of n
                steps += i;       // Add i to the steps
                n /= i;           // Reduce n
            }
        }
        return steps;
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;

    cout << "2 Keys Keyboard value is: " << keyKeyboard(n) << endl;
}