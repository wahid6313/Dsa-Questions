//Peak index mountain array-------------------
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums, int target) {
    int n = nums.size();
    int low = 0;
    int hi = n-1;
    int pivot = -1;

    if(n==2) {
        if(target == nums[0]) return 0;
        else if(target == nums[1]) return 1;
        else return -1;
    }
    while(low<=hi) {
        int mid = low + (hi-low)/2;
        if(mid == 0) low = mid +1;
        else if(mid == n-1) hi = mid -1;
        else if(nums[mid] < nums[mid+1] && nums[mid] < nums[mid-1]) {
            pivot = mid;
            break;
        }
        else if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]) {
            pivot = mid + 1;
            break;
        }
        else if(nums[mid] > nums[hi]) low = mid+1;
        else hi = mid - 1;
        }
        if(pivot == -1) {
            low = 0;
            hi = n-1;
            while(low<=hi) {
                int mid = low + (hi-low)/2;
                if(nums[mid] == target) return mid;
                else if(nums[mid] > target) hi = mid - 1;
                else low = mid + 1;
            }
            return -1;
        }
        if(target >= nums[0] && target <= nums[pivot-1]) {
            low = 0;
            hi = pivot - 1;

            while(low<=hi) {
                int mid = low + (hi-low)/2;
                if(nums[mid] == target) return mid;
                else if(nums[mid] > target) hi = mid -1;
                else low = mid + 1;
            }
        }
        else {
            low = pivot;
            hi = n-1;
            while(low<=hi) {
                int mid = low + (hi-low)/2;
                if(nums[mid] == target) return mid;
                else if(nums[mid] > target) hi = mid -1;
                else low = mid + 1;
            }
        }
        return -1;
}

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);

    int target = 0;
    for(int i =0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int ans = search(v,target);
    cout<<"Output is: "<<ans;
}