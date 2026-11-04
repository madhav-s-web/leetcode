class Solution {
    bool palindrome(int i, int j, string &s) {
        while (i <= j) {
            if (s[i] == s[j]) {

                i++;
                j--;

            } else {
                return false;
            }
        }
        return true;
    }

public:
    string longestPalindrome(string s) {

        int maxi = INT_MIN;
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
                bool isPalindrome = palindrome(i, j, s);
                if (isPalindrome && j - i + 1 > maxi) {
                    maxi = max(maxi, j - i + 1);
                    ans = s.substr(i, j-i+1);
                }
            }
        }
        if (maxi == INT_MIN)
            return s.substr(0, 1);
        return ans;
    }
};