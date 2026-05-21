#include<bits/stdc++.h>
using namespace std;

    string longestCommonPrefix(vector<string>& strs) {

        string ans = strs[0];

        for(int i = 1; i < strs.size(); i++) {

            while(strs[i].find(ans) != 0) {
                ans.pop_back();
            }
        }

        return ans;
    }

    int main(){
      vector<string>strs{"flower","flow","flight"};
      string ans=longestCommonPrefix(strs);
      cout<<ans;
      
    }
 