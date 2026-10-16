class Solution {
public:
    int scoreDifference(vector<int>& nums) {

        int first=0,second=0;
        int n = nums.size();
        int flag = 0 ;

        for(int i=0;i<n;i++){
            if(nums[i]%2!=0 ){
                flag = 1 - flag;
            }
            if( i % 6 == 5 && i !=0)flag = 1 - flag;
                  
           if(flag==0)first+=nums[i];
           else second+=nums[i];
        }


        return first-second;
    }
};