class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int positive = 0;
        int negative = 1;
        for(int x : nums){
            if(x>0){
                ans[positive]=x;
                positive+=2;
            }
            else{
                ans[negative]=x;
                negative+=2;
            }
        }
        return ans;
    }
};