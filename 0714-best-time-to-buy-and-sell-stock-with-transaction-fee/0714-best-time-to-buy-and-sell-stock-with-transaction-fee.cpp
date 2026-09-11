class Solution {
    int findMaxprofit ( int index , int buy, vector<int>& prices , vector<vector<int>>&dp,int fee ){

    int n = prices.size();
    if(index==n)return 0;
    if(dp[index][buy]!=-1 )return dp[index][buy];
    int profit = 0;

    if(buy){
        profit = max(   (-prices[index] +  findMaxprofit(index+1,0,prices,dp, fee)) ,  ( 0+findMaxprofit(index+1,1,prices,dp, fee) )     ) ;

    }
    else{
           profit = max( prices[index] -fee +  findMaxprofit(index+1,1,prices,dp, fee) ,  0 +    findMaxprofit( index+1,0,prices,dp, fee )      ) ;   
    }

    return dp[index][buy]= profit;
}
public:
    int maxProfit(vector<int>& prices, int fee) {
         int n = prices.size();
        int buy = 1;
        int index=0;

        vector<vector<int>>dp(n, vector<int>(2,-1));
         return  findMaxprofit(index,buy,prices,dp,fee);
     
    }
};