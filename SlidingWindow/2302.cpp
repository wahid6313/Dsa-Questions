// COUNT SUBARRAY WITH SCORE LESS THAN K 
//  Input: nums = [2,1,4,3,5], k = 10
// Output: 6
// Explanation:
// The 6 subarrays having scores less than 10 are:
// - [2] with score 2 * 1 = 2.
// - [1] with score 1 * 1 = 1.
// - [4] with score 4 * 1 = 4.
// - [3] with score 3 * 1 = 3. 
// - [5] with score 5 * 1 = 5.
// - [2,1] with score (2 + 1) * 2 = 6.
// Note that subarrays such as [1,4] and [4,3,5] are not considered because their scores are 10 and 36 respectively, while we need scores strictly less than 10.


#include<iostream>
using namespace std;

int main() {

    int nums[] = {2,1,4,3,5};
    int k = 10;
    int n = sizeof(nums)/sizeof(nums[0]);

    int i = 0, j = 0, sum = 0, count = 0;

    while(j<n) {
        sum += nums[j];

        while(sum * (j-i+1) >= k) {
            sum -= nums[i];
            i++;
        }
        count = count + (j-i+1);
        j++;
    }

    cout<<"Count subarray with score less than K is: "<<count;
}