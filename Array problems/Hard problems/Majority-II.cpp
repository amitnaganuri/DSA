#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int> ls;
        map<int, int> mpp;

        int n = nums.size();

        int mini = (n / 3) + 1;

        for(int i = 0; i < n; i++) {

            mpp[nums[i]]++;

            if(mpp[nums[i]] == mini) {
                ls.push_back(nums[i]);
            }

            if(ls.size() == 2) break;
        }

        return ls;
    }
};

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    vector<int> ans = obj.majorityElement(nums);

    cout << "[";

for(int i = 0; i < ans.size(); i++) {

    cout << ans[i];

    if(i != ans.size() - 1)
        cout << ", ";
}

cout << "]";
}