class Solution {
public:
    bool isGood(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());

         
        if (nums.size() != mx + 1)
            return false;

        unordered_map<int, int> freq;

        for (int x : nums)
            freq[x]++;

         
        for (int i = 1; i < mx; i++) {
            if (freq[i] != 1)
                return false;
        }

         
        return freq[mx] == 2;
    }
};