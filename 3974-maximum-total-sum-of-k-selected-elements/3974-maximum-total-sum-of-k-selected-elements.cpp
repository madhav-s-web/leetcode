class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {

        int n = nums.size();
        long long sum = 0;

        sort(nums.rbegin(),nums.rend());

        for(int i=0;i<k;i++){

            long long element = nums[i];

            if(mul<=0)mul=1;

            sum+=element*mul;
            mul--;
        }
        return sum;
    }
};