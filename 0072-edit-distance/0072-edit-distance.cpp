class Solution {
    int find (int index1,int index2,string &s1, string &s2, vector<vector<int>>&dp){
       if(index1 < 0)
    return index2 + 1;

if(index2 < 0)
    return index1 + 1;
         if(s1=="")return dp[index1][index2]= s2.length();
       if( dp[index1][index2] != -1 ) return dp[index1][index2];
       
       if(s1[index1]== s2[index2]){
          return   find(index1-1,index2-1,s1,s2,dp);
       }
       
        return dp[index1][index2] =
            1 + min({
                find(index1 - 1, index2, s1, s2, dp),     // delete
                find(index1, index2 - 1, s1, s2, dp),     // insert
                find(index1 - 1, index2 - 1, s1, s2, dp)  // replace
            });
   }
public:
    int minDistance(string s1, string s2) {
         int index1 = s1.length()-1;
         int index2 = s2.length()-1;
         vector<vector<int>>dp ( s1.length(), vector<int>(s2.length(),-1) );
          return  find(index1,index2,s1,s2,dp);
    }
};