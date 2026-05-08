#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;

        for(int i = 0; i < n; i++) {
            res.push_back(nums[i]);
            res.push_back(nums[i + n]);
        }

        return res;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int> ans = obj.shuffle(nums, n);

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}