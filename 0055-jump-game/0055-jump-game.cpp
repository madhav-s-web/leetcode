class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int maxIndexReach=0;
       
        for(int i=0 ; i<nums.size(); i++){

            if(i > maxIndexReach)
             return false;
            if( maxIndexReach >= nums.size()-1 )return true;

            maxIndexReach = max(maxIndexReach, i + nums[i] ) ;
        }
        return false;
    }
};