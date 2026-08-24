class Solution {
     bool sumLol(int index , vector<int>& arr,  vector<vector<int>> &dp,int sum){
        
        if(index==0)return arr[index] == sum ;
        if(dp[index][sum] != -1)return dp[index][sum];
        
        
        bool take = false;
        
        if( arr[index] <= sum ){
          take=  sumLol(index-1,arr,dp,sum-arr[index]) ;
        }
        
       bool notTake =  sumLol(index-1,arr,dp,sum);
        
        
        return dp[index][sum]=take||notTake;
        
    }
public:
    bool canPartition(vector<int>& arr) {
        int sum=0;
          for( int x : arr){
             sum+=x;
          }
           if(sum%2 !=0)return false;
          sum=sum/2;
        
        int n = arr.size();
        vector<vector<int>> dp ( n , vector<int>(sum+1,-1));
        int index = n-1;
       return  sumLol(index,arr,dp,sum);
    }
};