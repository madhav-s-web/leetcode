class Solution {
public:
    string reorganizeString(string s) {
        int n = s.length();
        unordered_map<char, int> mpp;

        for(char ch : s) {
            mpp[ch]++;
        }

        string ans(n, ' ');
        char maxi;
        int maxFreq = 0;

        for(auto it : mpp) {
            if(it.second > maxFreq) {
                maxFreq = it.second;
                maxi = it.first;
            }
        }

        if(maxFreq > (n + 1) / 2) return "";

        int index = 0;

        while(mpp[maxi] > 0) {
            ans[index] = maxi;
            mpp[maxi]--;
            index += 2;
        }

        for(auto it : mpp) {
            while(it.second > 0) {
                if(index >= n) index = 1;

                ans[index] = it.first;
                it.second--;
                index += 2;
            }
        }

        return ans;
    }
};