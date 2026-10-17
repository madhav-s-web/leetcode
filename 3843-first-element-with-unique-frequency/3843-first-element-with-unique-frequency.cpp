class Solution {
public:
    // Returns the element at the minimum index whose frequency occurs exactly once.
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        unordered_map<int, int> freqCount;

        for (auto& it : freq) {
            freqCount[it.second]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (freqCount[freq[nums[i]]] == 1) {
                return nums[i];
            }
        }

        return -1;
    }
};