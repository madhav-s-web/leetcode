class Solution {
    // Expands outward from the center and returns the palindrome's length.
    vector <int>expand(int left, int right, string& s) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        vector<int> ans;
         ans.push_back(left);
        ans.push_back(right);
        
       return {left + 1, right - 1};
    }

public:
    string longestPalindrome(string s) {
        if (s.length() == 1)
            return s;
        int maxi = INT_MIN;
        string ans = "";
        for (int i = 0; i < s.length(); i++) {

            vector<int> odd = expand(i, i, s);
            vector<int> even = expand(i, i + 1, s);

            int oddLen = odd[1] - odd[0] + 1;
            int evenLen = even[1] - even[0] + 1;
            if (oddLen > maxi) {
                maxi = oddLen;
                ans = s.substr(odd[0], oddLen);
            }

            if (evenLen > maxi) {
                maxi = evenLen;
                ans = s.substr(even[0], evenLen);
            }
        }

        return ans;
    }
};