class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>freq(101,0);
        int n = bulbs.size();
        for(int i=0;i<n;i++){
            freq[bulbs[i]]++;
        }
       int maxi = INT_MIN;
        for(int x : bulbs){
            maxi = max(maxi,x);
        }
          vector<int>ans;
        for(int i=0 ; i<=maxi ; i++){
            if(freq[i]%2!=0)ans.push_back(i);
        }
        return ans;
    }
};