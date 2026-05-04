#include<bits/stdc++.h>
using namespace std;




    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //for transpose of matrix
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // for reversing each row
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }


    int main(){
      int n;
      cout<<"Enter the size of matrix:";
      cin>>n;


      vector<vector<int>> matrix(n,vector<int>(n));


 //input
      cout<<"Enter the elements of matrix:\n";
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin>>matrix[i][j];
        }
      }

      rotate(matrix);

      cout<<"Rotated matrix is:\n";
      for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cout << matrix[i][j] << " ";  // space between elements
      }
      cout << endl;  // move to next row
      }
      cout<<endl;
    }