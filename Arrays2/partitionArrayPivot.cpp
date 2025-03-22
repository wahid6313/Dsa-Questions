#include <iostream>
#include <vector>
using namespace std;

vector<int> pivotArray(vector<int> &v, int pivot) {
    int n = v.size();

    vector<int> res(n);

    int ptr = 0;
    int count = 0;

    for(int i=0; i<n; i++) {
        if(v[i] < pivot) {
            res[ptr] = v[i];
            ptr++;
        }
        else if(v[i] == pivot) {
            count++;
        }
    }
    for(int i=0; i<count; i++) {
        res[ptr] = pivot;
        ptr++;
    }
    for(int i=0; i<n; i++) {
        if(v[i] > pivot) {
            res[ptr] = v[i];
            ptr++;

        }
    }
    return res;

}

int main() {

    vector<int> v;
 
    v.push_back(-3);  // 9,12,5,10,14,3,10 //-3,4,3,2
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(14);
    v.push_back(3);
    v.push_back(10);

    for(int i=0; i<=v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int pivot;
    cout<<"enter pivot element: ";
    cin>>pivot;


    v = pivotArray(v, pivot);

    // Print the sorted array
    cout << "Rearranged Array: ";
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

      
}