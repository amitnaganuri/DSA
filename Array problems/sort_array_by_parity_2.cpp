#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    int evenIndex = 0;
    int oddIndex = 1;

    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            ans[evenIndex] = nums[i];
            evenIndex += 2;
        } else {
            ans[oddIndex] = nums[i];
            oddIndex += 2;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {4,2,5,7};

    vector<int> result = sortArrayByParityII(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}