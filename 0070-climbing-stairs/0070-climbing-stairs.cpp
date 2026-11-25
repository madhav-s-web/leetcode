class Solution {

int findWays(int index,vector<int>&dp){
    if(index<0)return 0;
    if(index==0)return 1;
    if(dp[index]!=-1)return dp[index];

    return dp[index]=findWays(index-2,dp)+findWays(index-1,dp);
}
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
       return  findWays(n,dp);
        
    }
};