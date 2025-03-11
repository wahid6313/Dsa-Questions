#include <iostream>
using namespace std;

class Solution {
public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        if (n < k) return -1; 

        int maxSum = 0, sum = 0;

         for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        maxSum = sum;
        
        for (int i = k; i < n; i++) {
            sum += arr[i] - arr[i - k];  
            maxSum = max(maxSum, sum); 
        }

        return maxSum;
    }
};

int main() {
    int n, k;
    
    cout << "Enter the number of elements in array: ";
    cin >> n;

    vector<int> arr(n);
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    Solution obj;
    int result = obj.maximumSumSubarray(arr, k);
    
    cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;

}
