class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int consideringElement = nums[0];
        int freq=0;

        for(int i=0;i<nums.size();i++){
            if(freq==0)consideringElement=nums[i];
            if(nums[i]==consideringElement)freq++;
            else freq--;
        }

       return consideringElement;
    }
};