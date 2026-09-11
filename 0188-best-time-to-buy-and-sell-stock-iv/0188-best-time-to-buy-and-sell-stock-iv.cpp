class Solution {
    int findMaxprofit ( int index , int buy, vector<int>& prices ,  vector<vector<vector<int>>>&dp, int cap ){

    int n = prices.size();
    if( index == n || cap == 0 ) return 0;
    if(dp[index][buy][cap]!=-1 ) return dp[index][buy][cap];
    int profit = 0;

    if(buy){
        profit = max(   (-prices[index] +  findMaxprofit(index+1,0,prices,dp,cap)) ,  ( 0+findMaxprofit(index+1,1,prices,dp,cap) )     ) ;

    }
    else{
           profit = max( prices[index] +  findMaxprofit(index+1,1,prices,dp,cap-1) ,  0 +    findMaxprofit( index+1,0,prices,dp , cap )      ) ;   
    }

    return dp[index][buy][cap]= profit;
}

public:
    int maxProfit(int k, vector<int>& prices) {
         int n = prices.size();
        int buy = 1;
        int index=0;
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(2,vector<int>(k+1,-1)));
        return  findMaxprofit(index,buy,prices,dp,k);
    }
};