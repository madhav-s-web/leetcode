class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int maxProduct = INT_MIN;
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] > nums[j] && nums[i] + nums[j] == target) {

                    int currentProduct = nums[i] * nums[j];
                    if (currentProduct > maxProduct) {
                        ans.clear();
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                    maxProduct = max(maxProduct, currentProduct);
                }
            }
        }

        for (int i = n-1; i >=0; i--) {
            for (int j = i - 1; j >=0; j--) {
                if (nums[i] > nums[j] && nums[i] + nums[j] == target) {

                    int currentProduct = nums[i] * nums[j];
                    if (currentProduct > maxProduct) {
                        ans.clear();
                        ans.push_back(i);
                        ans.push_back(j);
                    }
                    maxProduct = max(maxProduct, currentProduct);
                }
            }
        }

        if (maxProduct == INT_MIN ) {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};