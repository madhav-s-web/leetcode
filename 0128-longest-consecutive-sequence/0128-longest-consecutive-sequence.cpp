class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int>sex;
    int n=nums.size();
    if(n==0)return 0;
    int maxi=1;
    for(int i=0;i<n;i++){
        sex.insert(nums[i]);
    }
    for(auto it:sex){
        if(sex.find(it -1)==sex.end()){
            int count=1;
            int x=it;
            while(sex.find(x+1)!=sex.end()){
                count++;
                x++;
            }
        maxi=max(count,maxi);
    
        }
    }
    return maxi;
    
    }
    };