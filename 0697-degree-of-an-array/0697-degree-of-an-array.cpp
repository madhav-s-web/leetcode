class Solution {
    // Finds the maximum frequency in the given index range.

public:
    int findShortestSubArray(vector<int>& nums) {
        // Finds the maximum frequency of any element in the array.
       int n = nums.size();
      
       int maxi = *max_element(nums.begin(), nums.end());

        vector<int>freqStore(maxi+1,0);

       for (int i = 0 ; i < n ; i++) {
        freqStore[nums[i]]++;
     
        }
        int maxFreq = *max_element(freqStore.begin(), freqStore.end());


       unordered_map<int, int> first, last;

for (int i = 0; i < nums.size(); i++) {
    if (first.find(nums[i]) == first.end()) {
        first[nums[i]] = i;  // Store only the first occurrence
    }

    last[nums[i]] = i;       // Update on every occurrence
}
      
      int mini = INT_MAX;

      for(int i=0;i<nums.size();i++){
        if( freqStore[nums[i]] == maxFreq){
            mini=min(mini,last[nums[i]]- first[nums[i]]+1);
        }
      }
       return mini;
    }
};