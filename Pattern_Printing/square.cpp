#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no. of rows : ";
    cin >> n;
    
    //normal square--------------
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    //number square--------------
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}