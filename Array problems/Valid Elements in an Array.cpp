#include <bits/stdc++.h>
using namespace std;

// Function to find valid elements
vector<int> findValidElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;

    for(int i = 0; i < n; i++) {
        bool greaterLeft = true;
        bool greaterRight = true;

        // Check left side
        for(int j = 0; j < i; j++) {
            if(nums[j] >= nums[i]) {
                greaterLeft = false;
                break;
            }
        }

        // Check right side
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

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = findValidElements(nums);

    cout << "Valid elements: ";
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}