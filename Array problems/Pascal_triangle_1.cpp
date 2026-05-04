#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i = 1; i <= numRows; i++) {
            long long val = 1;
            vector<int> row;

            row.push_back(1); // first element is always 1

            for(int j = 1; j < i; j++) {
                val = val * (i - j);
                val = val / j;
                row.push_back(val);
            }

            ans.push_back(row);
        }

        return ans;
    }
};

int main() {
    Solution obj;
    int numRows = 5;

    vector<vector<int>> result = obj.generate(numRows);

    // print Pascal's Triangle
    for(auto row : result) {
        for(auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}