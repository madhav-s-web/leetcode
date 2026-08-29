class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        vector<int> temp = intervals[0];
        for (auto it : intervals) {
            if (temp[1] > it[0]) {
                temp[1] = min(temp[1], it[1]);

            } else {
                ans.push_back(temp);
                temp = it;
            }
        }
         ans.push_back(temp);
       return n-ans.size();
    }
};