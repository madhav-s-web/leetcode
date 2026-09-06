class Solution {
int solve(int index,int amount ,  vector<vector<int>> &dp,vector<int>& coins){
    if(amount==0)return 1;
    if(index<0)return 0;
    if(dp[index][amount] != -1)return dp[index][amount];

    int take = 0;
    if( coins[index] <= amount ) {
        take = solve(index,amount-coins[index],dp,coins);
    }

    int notTake =  solve(index-1,amount,dp,coins);

     return dp[index][amount] = take+notTake ;
    
}

public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();

        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));

         return solve(n-1,amount,dp,coins);
    }
};