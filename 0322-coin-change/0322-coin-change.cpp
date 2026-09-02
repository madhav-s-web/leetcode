class Solution {
int findCoins(int index , int amount , vector<int>& coins,  vector<vector<int>>&dp){
    if(amount==0)return 0;
    if(index<0)return 1e9;
    if(dp[index][amount]!=-1)return dp[index][amount];
    int take = 1e9;

    if(coins[index]<= amount){
     take = 1 + findCoins(index,amount-coins[index],coins,dp);
    }
    
   int notTake =  findCoins(index-1,amount,coins,dp);

   return dp[index][amount] = min(take,notTake);
   
}


public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       int ans =  findCoins(n-1,amount,coins,dp);
       if(ans >= 1e9)
            return -1;

        return ans;
    }
};