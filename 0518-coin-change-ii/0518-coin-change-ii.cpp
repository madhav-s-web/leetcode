class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
    if(coins.size() == 0)
    return 0;
      vector<vector<long long>> dp(n, vector<long long>(amount + 1, 0));
        // Amount 0 1way
        for(int index = 0 ; index < n ; index++) {
            dp[index][0] = 1;
        }
        for(int target = 0; target <= amount; target++) {
            if(target % coins[0] == 0) {
                dp[0][target] = 1;
            }
        }

        if( coins[0]<= amount ) dp[0][coins[0]] =1;
        
        

          // Fill remaining rows
        for(int index = 1; index < n; index++) {

            for(int target = 1; target <= amount; target++) {

                // NOT TAKE current coin
                long long notTake = dp[index - 1][target];

                // TAKE current coin
                long long take = 0;

                if(coins[index] <= target) {
                    take =  dp[index][target - coins[index]];
                }

                 if(take > INT_MAX || notTake > INT_MAX ||
                   take > INT_MAX - notTake) {
                    dp[index][target] = INT_MAX;
                }
                else {
                    dp[index][target] = take + notTake;
                }

               
            }
        }



       
        return (int)dp[n - 1][amount];



    }
};