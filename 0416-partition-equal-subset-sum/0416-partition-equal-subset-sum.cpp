class Solution {
bool solve(int index ,vector<int>& nums ,int total, vector<vector<int>>&dp){
        
        if(total==0)return true;
        if(index==0) return nums[0]==total;
        if(dp[index][total]!=-1)return dp[index][total];
        bool take = false;
        
        if(nums[index]<= total ){
            take = solve(index-1,nums,total-nums[index],dp);
        }
        
        bool notTake = solve(index-1,nums,total,dp);
        
        return dp[index][total] = take|| notTake;
        
    }

public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
       
          int total = 0 ; 
        for(auto x : nums){
            total+=x;
        }

         if (total % 2 != 0)
            return false;
        vector<vector<int>> dp( nums.size(),vector<int>(total/2  + 1, -1));
        
      return  solve(n-1,nums,total/2,dp);
    }
};