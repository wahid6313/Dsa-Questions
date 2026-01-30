#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of rows : ";
    cin >> n;

    // Plus -----------------------------
    // int mid = n / 2 + 1;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if(i == mid || j == mid) {
    //             cout << "*" << " ";
    //         } else {
    //             cout << " " << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Cross Jesus---------------------------
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(i == j || i+j == n+1)
                cout << "*"<<" ";
            else
                cout << " "<<" ";
        }
        cout << endl;
    }

    return 0;
}