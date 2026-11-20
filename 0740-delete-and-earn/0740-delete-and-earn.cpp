class Solution {
 int findAnswer(int i ,vector<int>&dp , vector<int>&value  ){
    if(i<0)return 0;
    if(i==0)return value[0];
    if(dp[i]!=-1)return dp[i];

    int pick =  value[i] + findAnswer(i-2,dp,value);
    int notPick = findAnswer(i-1,dp,value);


return dp[i]= max(pick,notPick);
 }

public:
    int deleteAndEarn(vector<int>& nums) {

        int maxElement = *max_element(nums.begin(),nums.end());

        vector<int>value(maxElement+1,0);

        for (int x : nums) {
            value[x] += x;
        }

        vector<int>dp(maxElement+1,-1);

       return  findAnswer(maxElement,dp,value);



        
    }
};