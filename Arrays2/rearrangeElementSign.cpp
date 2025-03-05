#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeBySign(vector<int>& nums) {
    int n = nums.size();
    vector<int> v(n); 
    
    int pos = 0, neg = 1; 

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {  
            v[pos] = nums[i];
            pos += 2;
        } else {         
            v[neg] = nums[i];
            neg += 2;
        }
    }

    return v;
}

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(-2);
    v.push_back(-5);
    v.push_back(2);
    v.push_back(-4);

    cout<<"original array: ";
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> result = rearrangeBySign(v);


    cout << "Rearranged Array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;


}
