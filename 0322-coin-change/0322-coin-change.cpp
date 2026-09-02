class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();

        vector<vector<int>> dp(n, vector<int>(amount + 1, 1e9));

        // Amount 0 needs 0 coins
        for(int index = 0; index < n; index++) {
            dp[index][0] = 0;
        }

        // First row: only coins[0] is available
        for(int target = 1; target <= amount; target++) {

            if(target % coins[0] == 0) {
                dp[0][target] = target / coins[0];
            }
        }

        // Fill remaining rows
        for(int index = 1; index < n; index++) {

            for(int target = 1; target <= amount; target++) {

                // NOT TAKE current coin
                int notTake = dp[index - 1][target];

                // TAKE current coin
                int take = 1e9;

                if(coins[index] <= target) {
                    take = 1 + dp[index][target - coins[index]];
                }

                dp[index][target] = min(take, notTake);
            }
        }

        if(dp[n - 1][amount] >= 1e9)
            return -1;

        return dp[n - 1][amount];
    }
};