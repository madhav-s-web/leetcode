class Solution {
    int solve(int i, int j, string& s1, string& s2, vector<vector<int>>& dp) {

        if (i < 0)
            return j + 1;

        if (j < 0)
            return i + 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (s1[i] == s2[j]) {
            return dp[i][j] = 1 + solve(i - 1, j - 1, s1, s2, dp);
        }

        return dp[i][j] = 1 + min(solve(i - 1, j, s1, s2, dp),
                                  solve(i, j - 1, s1, s2, dp));
    }

public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int i = n - 1;
        int j = m - 1;
        string ans = "";
        while (i >= 0 && j >= 0) {
            if (str1[i] == str2[j]) {
                ans += str1[i];
                i--;
                j--;
            }

          else  if (solve(i-1, j, str1, str2, dp) <= solve(i, j-1, str1, str2, dp)) {
                ans += str1[i];
                i--;
            }
           else{
                ans += str2[j];
                j--;
            }
        }

        while (i >= 0) {
            ans += str1[i];
            i--;
        }
        while (j >= 0) {
            ans += str2[j];
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
