class Solution {
// bool check(int i,int j , vector<int>&nums){
//      int bit = nums[i];
//     for(int x=i+1;x<=j;x++){
//         bit = bit & nums[x];
        
//     }
//     int mini=INT_MAX;

//     for(int x=i;x<=j;x++){
//         mini=min(mini,nums[x]);
//     }

//     if(bit==mini)return true;
//     return false;
// }

public:
    int countConsistent(vector<int>& nums) {

        int n = nums.size();
        int count=0;
       
        for(int i=0;i<n;i++){
            int mini = nums[i];int bit = nums[i];
            for(int j=i;j<n;j++){
             bit = bit & nums[j];
             mini=min(mini,nums[j]);
             if(bit==mini)count++;
            }
        }
        return count;
    }
};