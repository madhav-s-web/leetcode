class Solution {
int solve(int index  , vector<int>&dp , vector<int>& nums){
    int n = nums.size();
    if ( index >= n-1 ) return 0;

    if(dp[index]!=-1)return dp[index];

     int ans = INT_MAX;
    for(int  i = 1 ; i <= nums[index] ; i++){
        int next = i + index;
        if(next < n){
         int result = solve(index+i , dp  , nums);
         if(result != INT_MAX)
                    ans = min(ans, 1 + result);
        }
    }
    return dp[index] = ans;
}

public:
    int jump(vector<int>& nums) {

        int index =0 ;
        int count=0;
        vector<int>dp(nums.size()-1, -1);

         return solve(index,dp, nums);
        
    }
};