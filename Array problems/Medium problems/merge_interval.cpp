 class Solution {
public:
    bool isOverlap(vector<int>& a, vector<int>& b){
        return max(a[0], b[0]) <= min(a[1], b[1]);
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<bool> removed(n, false);

        bool merged = true;

        // Repeat until no more merges happen
        while(merged){
            merged = false;

            for(int i = 0; i < n; i++){
                if(removed[i]) continue;

                for(int j = i + 1; j < n; j++){
                    if(removed[j]) continue;

                    if(isOverlap(intervals[i], intervals[j])){
                        // Merge into i
                        intervals[i][0] = min(intervals[i][0], intervals[j][0]);
                        intervals[i][1] = max(intervals[i][1], intervals[j][1]);

                        removed[j] = true;
                        merged = true;
                    }
                }
            }
        }

        // Collect result
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            if(!removed[i]){
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};