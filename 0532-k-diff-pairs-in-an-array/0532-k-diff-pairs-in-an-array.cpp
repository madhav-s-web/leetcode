class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i=0;
        int j=i+1;
       
        sort(nums.begin(),nums.end());
        map<int,int>temp;
        while(j<nums.size() && i<=j){
            if(nums[j]-nums[i]==k && i!=j){
                temp[nums[j]]=nums[i];
               
                 j++;
            }
            else if(nums[j]-nums[i]==k && i==j)j++;
            else if(nums[j]-nums[i]<k)j++;
            else {
                i++;
            }     
        }
        return temp.size();
    }
};