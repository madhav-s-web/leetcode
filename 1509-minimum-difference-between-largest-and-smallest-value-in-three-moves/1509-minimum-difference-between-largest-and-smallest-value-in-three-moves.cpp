class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        sort( nums.begin(),nums.end() ) ;
         if(n < 5) return 0;
         
         int x1 = INT_MAX, x2 = INT_MAX, x3 = INT_MAX, x4 = INT_MAX;

         if(n > 3) x1 = nums[n-1] - nums[3];
         if(n > 3) x2 = nums[n-4] - nums[0];
         if(n > 2) x3 = nums[n-2] - nums[2];
         if(n > 2) x4 = nums[n-3] - nums[1];

        int minX1X2 = min(x1,x2);
        cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" ";
        int minX3X3 = min(x3,x4);

        return min(minX1X2,minX3X3);
        
    }
};