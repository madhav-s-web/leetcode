class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positive;
         vector<int>negative;
         for(int i=0;i<nums.size();i++){
            if(nums[i]>0)positive.push_back(nums[i]);
            else{
                negative.push_back(nums[i]);
            }
         }
         vector<int>ans;
         int t=0;
         int j=0;
         for(int i=0;i<nums.size();i++){
            if(i%2==0) {ans.push_back(positive[t++]);
           
            }
            else{
                ans.push_back(negative[j++]);
            }
         }
        return ans;
    }
};