class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
          nums[i]= abs(nums[i]);
        }

       sort(nums.begin(),nums.end());




       int n= nums.size();
        for(int i=0;i<nums.size();i++){
            if(i>(n/2)-1 ){
                cout<<i;
                cout<<endl;
                sum+=1LL*nums[i]*nums[i];
                }

            else{
                sum-=1LL*nums[i]*nums[i];
            }
        }
        return sum;
    }
};