class Solution {
public:
    vector<string> assignUmbrella(vector<int>& nums) {

        vector<string>ans;
         int alice=0;
         int bob =0;
         int n = nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==1 && nums[i+1]==1 && alice != bob ){

                if(bob>alice){
                    ans.push_back("Alice");
                    alice++;
                }
                else {
                    ans.push_back("Bob");
                    bob++;
                }

            }
            else if(nums[i]==1 && nums[i+1]==1 && alice == bob){
                ans.push_back("Alice");
                alice++;
                }

            else if(nums[i]==1 && nums[i+1]==0){
                ans.push_back("Bob");
                bob++;
            }

            else {
                ans.push_back("None");
            }

        }
        if ( nums[n-1] == 1 )ans.push_back("Bob");
        else if ( nums[n-1] == 0 )ans.push_back("None");

        
        return ans;
    }
};