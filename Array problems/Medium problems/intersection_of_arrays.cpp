#include<bits/stdc++.h>
using namespace std;


 
 
    vector<int> intersection(vector<vector<int>>& nums) {
        int n=nums.size();
        map<int,int>mp;
        vector<int> ans;
        for(int i=0;i<n;i++){
            for (int j=0;j<nums[i].size();j++){
                mp[nums[i][j]]++;

            }

        }
        for(auto it:mp){
            if(it.second==n){
                ans.push_back(it.first);
            }
        }
        return ans;
        
        
    }

    int main(){
      vector<vector<int>>nums{{1,2,3,},{2,3,4},{3,4,5}};
      vector<int>ans=intersection(nums);
      for(int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
      }