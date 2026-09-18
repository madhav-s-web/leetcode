class Solution {
    int solve(int i,int j,vector<int>& cuts ,vector<vector<int>>&dp){
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int mini=INT_MAX;
        for(int ind=i;ind<=j;ind++){
             int length= cuts[j+1]-cuts[i-1]+ solve(i,ind-1,cuts,dp)+ solve(ind+1,j,cuts,dp);
             mini=min(mini,length);
        }
        return dp[i][j]= mini;
    }
public:
    int minCost(int n, vector<int>& cuts) {
        int m = cuts.size();
        cuts.push_back(n);
        
        cuts.insert(cuts.begin(),0);
        vector<vector<int>>dp(m+2,vector<int>(m+2,-1));
        sort(cuts.begin(),cuts.end());
       return  solve(1,m,cuts,dp);
    }

};