class Solution {
    int findMaxSubset(int index , vector<int>& nums ,  vector<vector<int>>&dp , int prev){
        if(index<0)return 0;
        int take =0 ;
        if(dp[index][prev+1]!=-1)return dp[index][prev+1];

        if( prev==-1 ||    nums[prev]%nums[index] ==0){
            take= 1 + findMaxSubset(index-1,nums,dp,index);
        }
        int notTake = findMaxSubset(index-1,nums,dp,prev);

        return dp[index][prev+1] = max(take,notTake);

    }
vector<int>reconstruct(int index , vector<int>& nums ,  vector<vector<int>>&dp ,vector<int>&ans, int prev){
    if (index < 0)
            return ans;

            int take = 0;
            if( prev==-1 || nums[prev]%nums[index] ==0 ){
                take = 1+findMaxSubset(index-1,nums,dp,index);
                if(take==dp[index][prev+1]){
                    ans.push_back(nums[index]);
                return reconstruct(index-1,nums,dp,ans,index);
                }
            }
          
           return reconstruct(index-1,nums,dp,ans,prev);
}




public:
    vector<int>largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        sort( nums.begin() , nums.end() );
       int maxSubsetPossible =  findMaxSubset(n-1,nums,dp,-1); // funtion to find max subset 
       vector<int>ans;
      return reconstruct(n-1,nums,dp,ans,-1);
    }
};