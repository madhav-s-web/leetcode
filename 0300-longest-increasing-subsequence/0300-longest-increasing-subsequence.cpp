class Solution {
    int solve(int index, vector<int>& nums,
              vector<vector<int>>& dp, int prev) {

        if (index < 0)
            return 0;

        if (dp[index][prev + 1] != -1)
            return dp[index][prev + 1];

        int take = 0;

        if (prev == -1 || nums[index] < nums[prev]) {
            take = 1 + solve(index - 1, nums, dp, index);
        }

        int notTake = solve(index - 1, nums, dp, prev);

        return dp[index][prev + 1] = max(take, notTake);
    }

public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> dp(n, vector<int>(n + 1, -1));

        return solve(n - 1, nums, dp, -1);
    }
};