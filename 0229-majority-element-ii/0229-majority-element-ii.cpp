class Solution {
public:
    vector<int>majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int ele1=INT_MIN;
        int ele2=INT_MIN;
        vector<int>ans;
        int n=nums.size();
        for( int i=0 ; i<nums.size() ; i++ ){

            if(count1==0 && ele2 != nums[i]){
                count1=1;
                ele1=nums[i];
            }
           else if (count2==0 &&  nums[i] != ele1) {
                count2=1;
                ele2=nums[i];
            }

           else if(nums[i]==ele1)count1++;
             else if(nums[i]==ele2)count2++;
             else{
                count1--;
                count2--;
             }


        }
      int lol1=0;
      int lol2=0;
        for(int x: nums){
          if(x==ele1)lol1++;
          else if (x==ele2)lol2++;
        }

        if(lol1>n/3) ans.push_back(ele1);
        if(lol2>n/3) ans.push_back(ele2);
        vector<int>lol;

        if(ele1==INT_MIN && ele2==INT_MIN)return lol;
        return ans;
    }
};