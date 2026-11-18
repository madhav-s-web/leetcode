class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int k = nums.size()-1;

        int j = i+1;

        if(nums[i]*nums[j]*nums[k]<nums[k-2]*nums[k-1]*nums[k])return nums[k-2]*nums[k-1]*nums[k];
        if(  nums[i]<0 && nums[j]<0  && nums[k]>0 ){
            return nums[i]*nums[j]*nums[k];
        }
        else if(  nums[i]<0 && nums[j]<0  && nums[k]<0){
            return nums[k-2]*nums[k-1]*nums[k];
        }
       return nums[k-2]*nums[k-1]*nums[k];
    }
};