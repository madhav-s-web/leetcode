class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        int left = 0;
        int top = 0;
        int right = m - 1;
        int down = n - 1;

        while (left <= right && top <= down) {

            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;

            for (int i = top; i <= down; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            if (top <= down) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[down][j]);
                }
                down--;
            }

            if (left <= right) {
                for (int i = down; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};