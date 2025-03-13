#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> productOfArray(vector<int> &v, vector<int> &qe) {
    int n = v.size();
    int m = qe.size();

    vector<int> ans(m);

    sort(v.begin(), v.end());

    for(int i = 1; i<n; i++) {
        v[i] = v[i] + v[i-1]; 
    }

    
    // for(int i =0; i<m; i++) {
    //     int len = 0;
    //     for(int j =0; j<n; j++) {
    //         if(v[j] > qe[i]) {
    //             break;
    //         } else {
    //             len++;
    //         }
            
    //     }
    //     ans[i] = len;
    // }
    
    for(int i =0; i<m; i++) {
        int maxLen = 0;

        //binary search---------------------
        int low = 0;
        int hi = n-1;

        while(low<=hi) {
            int mid = low + (hi - low) / 2;
            if(v[mid] > qe[i] ) hi = mid -1;
            else {
                maxLen = mid + 1;
                low = mid + 1;
            }
        }
        ans[i] = maxLen;
    }

    return ans;


}

int main() {
    vector<int> v;

    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(1);

    vector<int> qe;
    qe.push_back(3);
    qe.push_back(10);
    qe.push_back(21);


    
vector<int> vs = productOfArray(v,qe);
for(int i =0 ; i<vs.size(); i++) {
    cout<<vs[i]<<" ";
} cout<<endl;

}