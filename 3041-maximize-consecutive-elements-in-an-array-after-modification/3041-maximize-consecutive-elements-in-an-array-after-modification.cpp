
class Solution {
public:
    // Finds the longest consecutive sequence when each element
    // can either remain unchanged or be increased by one.
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        unordered_map<int, int> dp;
        int ans = 0;

        for (int x : nums) {
            dp[x + 1] = dp[x] + 1;
            dp[x] = dp[x - 1] + 1;

            ans = max(ans, max(dp[x], dp[x + 1]));
        }

        return ans;
    }
};
