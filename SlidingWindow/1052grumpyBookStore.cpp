#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int grumpyBookStor(vector<int> &arr, vector<int> &grumpy, int k) {
    
}

int main() {
    vector<int> v;

    v.push_back(1);  //1,0,1,2,1,1,7,5
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(7);
    v.push_back(5);

    vector<int> qe;  //0,1,0,1,0,1,0,1
    qe.push_back(0);
    qe.push_back(1);
    qe.push_back(0);
    qe.push_back(1);
    qe.push_back(0);
    qe.push_back(1);
    qe.push_back(0);
    qe.push_back(1);


    int k = 3;
    cout<<"Output is: "<< grumpyBookStor(v,qe,k);

}