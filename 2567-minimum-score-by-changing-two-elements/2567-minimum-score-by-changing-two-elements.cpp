class Solution {
public:
    int minimizeSum(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(),nums.end());

       int x1 = nums[n-1]-nums[2];
       int x2 = nums[n-2]-nums[1];
       int x3 = nums[n-3]-nums[0];

       return min(x1,min(x2,x3));
        
    }
};