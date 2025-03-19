// count the value first then count number first and then value and output is "1 3 2 2 1 1 1 5 2 9" store in the string
#include <iostream>
#include <string>
// #include <typeinfo> 
using namespace std;

int main() {
    int nums[] = {3, 2, 2, 1, 5, 9, 9};
    int n = sizeof(nums) / sizeof(nums[0]);

    int count = 1;
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && nums[i] == nums[i + 1]) {
            count++;
        } else {
            cout<<count<<" "<<nums[i]<<" ";
            count = 1;
        }
    }

    // string str = to_string(78979);
    // cout<<str;
    
    
}