class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
       int n = nums.size();
        int increasingMax=INT_MIN;
        int decreasingMax= INT_MIN;

        for(int i=0;i<nums.size();i++){
            int currentIncrease=1;
            for(int j=i;j<n-1;j++){
                  if(nums[j]<nums[j+1])currentIncrease++;
                  else break;
            }
            increasingMax= max(increasingMax,currentIncrease);
        }

        for(int i=0;i<nums.size();i++){
            int currentDecrease=1;
            for(int j=i;j<n-1;j++){
                  if(nums[j]>nums[j+1])currentDecrease++;
                  else break;
            }
            decreasingMax = max(decreasingMax,currentDecrease);
        }
        return max(decreasingMax,increasingMax);
    }
};