class Solution {
  int solve (int index, int count , int n , vector<int>&dp , vector<int>& nums){
    if(index>= n-1) return 0;
    if( dp[index]!= -1 )return dp[index];
    int ans = INT_MAX;

    for(int i=1 ; i <=  nums[index] ; i++){
        int next = index + i;
        if ( next < n ){
            int result =  solve(index+i,count+1,n,dp,nums);
            if(result != INT_MAX)
                    ans = min(ans, 1 + result);
        }
     
    }
     return dp[index] = ans;
  }


public:
    int jump(vector<int>& nums) {
        int index = 0 ;
        int n = nums.size();
        int count = 0 ;
        vector<int>dp(n,-1);
       return  solve(index,count,n,dp,nums);
        
    }
};