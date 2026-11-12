class Solution {
int findCost(int index , vector<int>& costs,vector<int>&dp){
    if(index==0)return  dp[index]=0;
    if(dp[index-1]!=-1)return dp[index];

    int costN1 = costs[index-1] + 1 + findCost(index - 1, costs,dp);
        int costN2 = INT_MAX, costN3 = INT_MAX;

        if(index >= 2)
            costN2 = costs[index-1] + 4 + findCost(index - 2, costs,dp);

        if(index >= 3)
            costN3 = costs[index-1] + 9 + findCost(index - 3, costs,dp);


    int lol = min(costN1,costN2);


    return  dp[index] = min(costN3,lol);
}

public:
    int climbStairs(int n, vector<int>& costs) {
         vector<int>dp(n+1,-1);
       return  findCost(n,costs,dp);
        
    }
};