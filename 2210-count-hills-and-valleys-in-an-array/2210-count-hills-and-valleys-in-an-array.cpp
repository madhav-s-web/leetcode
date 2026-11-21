class Solution {
    vector<int> compressArray(vector<int>& nums) {
    vector<int> temp;

    for (int x : nums) {
        if (temp.empty() || temp.back() != x) {
            temp.push_back(x);
        }
    }

    return temp;
}
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        nums = compressArray(nums);
        for(int i=1;i<nums.size()-1;i++){
            
             if( nums[i] > nums[i-1] && nums[i] > nums[i+1] ){
                
                count++;
            }
            else if(nums[i] < nums[i-1] && nums[i] < nums[i+1]){
                count++;
                 
            }
        }
        return count;
    }
};