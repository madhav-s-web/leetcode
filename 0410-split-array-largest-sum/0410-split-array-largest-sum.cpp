class Solution {
    bool is_mid_possible(vector<int>&nums,int mid,int k){
        int n=nums.size();
        int sum=0;
        int count=1;
        for(int i=0;i<n;i++){
          
          if(nums[i]>mid)return false;
          if(sum+nums[i]<=mid){
             sum+=nums[i];
          }
          else {
            count++;
            if(count>k)return false;
            sum=nums[i];

          }
        }
        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
       int potential=-1;
       int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int low=0;int high=sum;
        while(low<=high)
        {
         int mid=(low+high)/2;
         bool answer=is_mid_possible(nums,mid,k);
         if(answer==true){
            potential=mid;
            high=mid-1;
         }
         else {
            low=mid+1;
         }

        }
        return potential;
    }
};