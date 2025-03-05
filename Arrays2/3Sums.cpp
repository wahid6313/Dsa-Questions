///// find the highest altitude  /////
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &v) {
    int n = v.size();

    vector<vector<int>> ans;


    sort(v.begin(), v.end());

    for(int i =0 ; i<n; i++) {

        if(i>0 && v[i] == v[i-1]) continue;

        int j = i + 1;
        int k = n-1;

        while(j<k) {
            int sum = v[i] + v[j] + v[k];
            if(sum > 0) k--;
            else if(sum < 0) j++;

            else {
                ans.push_back({v[i], v[j], v[k]});
                j++; k++;

                while(j<k && v[j] == v[j-1]) j++;
                while(j<k && v[k] == v[k + 1]) k--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> v;
 
    v.push_back(-1);  // [-1,0,1,2,-1,-4]
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(-1);
    v.push_back(-4);


    for(int i=0; i<=v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<vector<int> > result = threeSum(v);
    cout<<"three sum:-"<<endl;

    for (vector<int> index : result) {
        cout << index[0] << " " << index[1] << " " << index[2] << endl;
    } 
}