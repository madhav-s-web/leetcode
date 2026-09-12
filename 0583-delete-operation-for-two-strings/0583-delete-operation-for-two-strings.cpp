class Solution {
    int find (int index1,int index2,string &s1, string &s2, vector<vector<int>>&dp){
       if(index1<0 || index2<0)return 0;
       if( dp[index1][index2] != -1 ) return dp[index1][index2];
       
       if(s1[index1]== s2[index2]){
          return  1 + find(index1-1,index2-1,s1,s2,dp);
       }
       
       return  dp[index1][index2] = max( find(index1-1,index2,s1,s2,dp)    ,     find(index1,index2-1,s1,s2,dp)  );
   }
public:
    int minDistance(string s1, string s2) {
        int index1 = s1.length()-1;
         int index2 = s2.length()-1;
         vector<vector<int>>dp ( s1.length(), vector<int>(s2.length(),-1) );
          int x =  find(index1,index2,s1,s2,dp);
          return s1.length()-x + s2.length()-x;

    }
};