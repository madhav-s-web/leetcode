class Solution {
public:
    int balancedStringSplit(string s) {
        int rCount=0;
        int lCount=0;
        int ans=0;

        for(char c : s){
            if(c=='L')lCount++;
            else if(c=='R')rCount++;

            if(lCount==rCount){
                ans++;
                lCount=0;
                rCount =0;
            }
            
        }
        return ans;
    }
};