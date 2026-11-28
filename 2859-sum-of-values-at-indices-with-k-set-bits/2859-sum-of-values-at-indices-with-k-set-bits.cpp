class Solution {
    int noSetBits(int n){
        int count=0;
        while(n){
            if(n&1==1)count++;
            n= n>>1;
        }
        return count;
    }
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {

        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(noSetBits(i)==k)sum+=nums[i];
        }
        return sum;
    }
};