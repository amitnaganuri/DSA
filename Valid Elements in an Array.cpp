class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;

        for(int i = 0; i < n; i++) {
            bool greaterLeft = true;
            bool greaterRight = true;

             
            for(int j = 0; j < i; j++) {
                if(nums[j] >= nums[i]) {
                    greaterLeft = false;
                    break;
                }
            }

             
            for(int j = i + 1; j < n; j++) {
                if(nums[j] >= nums[i]) {
                    greaterRight = false;
                    break;
                }
            }

            if(greaterLeft || greaterRight) {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
    
};