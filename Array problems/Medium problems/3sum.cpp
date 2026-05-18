#include <bits/stdc++.h>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {

            // Skip duplicate values for i
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            unordered_set<int> hashset;

            for(int j = i + 1; j < n; j++) {

                int third = -(nums[i] + nums[j]);

                if(hashset.find(third) != hashset.end()) {

                    ans.push_back({nums[i], third, nums[j]});

                    // Skip duplicate values for j
                    while(j + 1 < n && nums[j] == nums[j + 1])
                        j++;
                }

                hashset.insert(nums[j]);
            }
        }

        return ans;
    }



    int main() {
        vector<int> nums = {-1,0,1,2,-1,-4};

        vector<vector<int>> ans = threeSum(nums);

        for(auto x : ans) {
            for(int y : x) {
                cout << y << " ";
            }
            cout << endl;
        }

        return 0;
    }
