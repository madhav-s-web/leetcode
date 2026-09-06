class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        int minPrice  = prices[0];


        for( int i=1 ; i<prices.size() ; i++){
            int currentProfit = prices[i]- minPrice;
            minPrice= min(minPrice,prices[i]);
            maxProfit=max(maxProfit,currentProfit);
        }
       if(maxProfit<0)return 0;
        return maxProfit;
    }
};