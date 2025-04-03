#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int widr;
    float balance;
    cin >> widr >> balance;

    if (widr % 5 == 0 && (widr + 0.50) <= balance) {
        balance -= (widr + 0.50);
    }

    cout << balance;
    
    
}
    

