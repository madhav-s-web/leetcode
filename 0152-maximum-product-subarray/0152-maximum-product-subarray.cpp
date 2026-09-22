class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int suffix=1;
        int prefix=1;
        int n=nums.size();
         int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(prefix==0)prefix=1;
            if(suffix==0)suffix=1;
            suffix=suffix*nums[i];
            prefix=prefix*nums[n-i-1];
            maxi=max(maxi,max(prefix,suffix));
        }
        return maxi;
    }
};