class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        int maxi= INT_MIN;
        for(int x : nums){
            maxi = max(maxi,x);
        }
        vector<int>numberTofreq(maxi+1,0);
        for(int x : nums){
            numberTofreq[x]++;
        }
        
        vector<int>ans;
      
        
        for(int i=1;i<numberTofreq.size();i++){
            for(int j=i+1;j<numberTofreq.size();j++){
                if(i<j && numberTofreq[i]!=0 && numberTofreq[j] !=0 && numberTofreq[i] !=  numberTofreq[j] ){
                    ans.push_back(i);
                    ans.push_back(j);
                   return ans;
                }

            }
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};