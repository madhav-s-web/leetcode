class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for (int bitSet = 0; bitSet < 32; bitSet++) {
            int count = 0;
            for (int i = 0; i < nums.size(); i++) {
                if ((nums[i] & (1 << bitSet)) != 0) {
                    count++;
                }
            }
            cout << count << endl;
            if (count % 3 == 1) {

                ans = ans | (1 << bitSet);
            }
        }
        return ans;
    }
};