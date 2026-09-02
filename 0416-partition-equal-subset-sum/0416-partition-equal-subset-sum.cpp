class Solution {
   
public:
    bool canPartition(vector<int>& arr) {
        int sum=0;
          for( int x : arr){
             sum+=x;
          }
           if(sum%2 !=0)return false;
          sum=sum/2;
        
         vector<vector<bool>>dp(arr.size() , vector<bool>(sum+1, false));
     int  n = arr.size();
     
     for(int i=0 ; i< n; i++)dp[i][0]=true;
     
     if(arr[0] <= sum)
    dp[0][arr[0]] = true;
     for(int index=1;index<n;index++){
         for(int s=1; s<=sum;s++){
            bool notTake  = dp[index-1][s];
            
            bool take = false;
            if(arr[index]<=s){
                take = dp[index-1][s-arr[index]];
            }
            dp[index][s] = take|notTake;
         }
     }
        return dp[n-1][sum];
    }
};