#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of rows : ";
    cin >> n;

    // int k = 1;
    // for (int i = 1; i <= n; i++) {
        
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << k << " ";
    //         k++;
    //     }
    //     cout << endl;
    // }

    // Binary Triangle --------------------

    // int a;
    // for (int i = 1; i <= n; i++) {
    //     if(i % 2 != 0) {
    //         a = 1;
    //     } else {
    //         a = 0;
    //     }
    //     for (int j = 1; j <= i; j++) {
    //         cout << a << " ";
    //         a = (a == 0) ? 1 : 0;
    //     }
    //     cout << endl;
    // }

    //Second Process--------------------

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if((i+j)%2 == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}