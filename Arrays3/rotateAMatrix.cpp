#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int> > &matrix) {
  int n = matrix.size();

  //transpose------
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
        //swap--
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
    }
  }

  //reverse----
  
  for(int k=0; k<n; k++) { //reset for each row;
    int i=0;
    int j =  n-1;
    while(i<=j) //then swapping k,i and k,j
    {
        int temp = matrix[k][i];
        matrix[k][i] = matrix[k][j];
        matrix[k][j] = temp;
        i++;
        j--;
    }
  }
  return;
}

int main() {

    int m = 4;
    int n = 4;

    vector<vector<int> > matrix;
    matrix.push_back(vector<int>(4));  // Add empty rows first
    matrix.push_back(vector<int>(4));
    matrix.push_back(vector<int>(4));
    matrix.push_back(vector<int>(4));

    // Fill matrix manually
    int values[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 1, 2},
        {3, 4, 5, 6}
    };

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = values[i][j];
        }
    }

    cout<<"Matrix:- "<<endl<<endl;
    for(int i=0; i<=m-1; i++) {
        for(int j=0; j<=n-1; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Rotate Matrix:- "<<endl<<endl;

    rotate(matrix);
    for(int i=0; i<=m-1; i++) {
        for(int j=0; j<=n-1; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}