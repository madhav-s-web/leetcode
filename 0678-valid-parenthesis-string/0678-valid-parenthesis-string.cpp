class Solution {
bool lol(int index , int count, string s, vector<vector<int>>&dp){
   
    int n = s.length();

    if(count<0)return false;
    if(index==n)return count==0;
      if(dp[index][count] !=-1)return dp[index][count];

    if(s[index]=='(') return dp[index][count] = lol( index+1 , count+1,s,dp);
    if(s[index]==')') return dp[index][count] =lol( index+1 , count-1,s,dp);

    if(s[index]=='*') return dp[index][count] = lol( index+1 , count+1,s,dp) || lol( index+1 , count-1,s,dp) || lol( index+1 , count,s,dp);
   
   return false;
}


public:
    bool checkValidString(string s) {
        int index = 0 ;
        int count = 0 ;
       
       vector<vector<int>>dp(s.size()+1 , vector<int>(s.size()+1,-1));

        return lol(index,count,s,dp);
        
        
    }
};