#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int> &height) {
    int n = height.size();

    //previous gretaest element---
    int prev[n];
    prev[0] = -1;
    int max = height[0];

    for(int i=1; i<=n-1; i++) {
       prev[i] = max;
       if(max < height[i]) max =  height[i];
    }
    
    //next greates elemnt----
    // int next[n];
    // next[n-1] = -1;
    // max = height[n-1];

    // for(int i=n-2; i>=0; i--) {
    //     next[i] = max;
    //     if(max < height[i]) {
    //         max = height[i];
    //     }
    // }

    ///////////////////////////////////////////////
    //METHOD-3 // create 1 array  (best approach)---
    //when we apply this code there is no need to find the min array;
    prev[n-1] = -1;
    max = height[n-1];
    for(int i=n-2; i>=0; i--) {
        if(max < prev[i]) prev[i] = max;
        if(max < height[i]) max = height[i];
    }



    //minimum element of both array--//create three array----
    // int mini[n]; 
    // for(int i=1; i<n; i++) {
    //     mini[i] = min(prev[i], next[i]);
    // }

     ///////////////////////////////////////////////
    //METHOD--2  ////create 2 array-------
    // for(int i=1; i<n; i++) {
    //     prev[i] = min(prev[i], next[i]);
    // }

    //calculating water-----
    int water =0;
    for(int i=1; i<n-1; i++) {
        if(height[i] < prev[i]) {   // if(height[i] < mini[i])
            water += (prev[i] - height[i]);  // water += (mini[i] - height[i]);
        }
    }
    return water;
}

int main() {
    vector<int> height;

    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);

    for(int i=0; i<height.size(); i++) {
        cout<<height[i]<<" ";

    }
    cout<<endl;


    cout<<"Capicity of water caontain:- ";
    cout<<trap(height);
}
