#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of rows : ";
    cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++)  {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // Reverse Star-Triangle---------------
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n + 1 - i; j++) {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // Number in Reverse Triangle-----------

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1 - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}