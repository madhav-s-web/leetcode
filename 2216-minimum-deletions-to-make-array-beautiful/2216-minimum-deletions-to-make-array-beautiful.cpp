class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int flag=0;//means even 
        int count=0;
        int n = nums.size() ;
        int x = nums.size() ;
        if(n==0)return 0;
        
        for(int i=0 ; i < nums.size() ; i++){
         if(flag==0){
              if( i<n-1 && nums[i] == nums[i + 1] && i % 2 == 0){
             count++;
             x--;
            flag=1-flag;
              }
            
           }
           else{
            if( i<n-1 && nums[i] == nums[i + 1] && i % 2 != 0){
            count++;
            flag=1-flag;
            x--;
            }
           
           }
        }
        if(x%2==0)return count;
        return count+1;
    }
};