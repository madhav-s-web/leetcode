class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            vector<int> temp;
            for (int j = i; j < n; j++) {
                
               
                    sum += nums[j];
                    temp.push_back(nums[j]);
                
                 if (temp.size() >= l && temp.size() <= r){
                    int sum1= 0 ;

                    for(int x : temp)sum1+=x;
                  
                    if(sum1>0) mini = min(sum1, mini);
                 }
               
            }
            
        }
        if (mini == INT_MAX)
            return -1;
        return mini;
    }
};