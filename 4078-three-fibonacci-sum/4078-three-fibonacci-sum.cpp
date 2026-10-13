class Solution {
    // Calculates Fibonacci numbers using memoization, stopping at the target limit.
    long long fibon(int i, vector<long long>& dp, long long n) {
        if (i <= 1) return dp[i] = i;
        if (dp[i] != -1) return dp[i];

        long long a = fibon(i - 1, dp, n);
        long long b = fibon(i - 2, dp, n);

        if (a > n - b) return dp[i] = n + 1;

        return dp[i] = a + b;
    }

public:
    bool threeFibonacciSum(int n) {
        vector<long long> dp(50, -1);

        for (int i = 0; i < 50; i++) {
            fibon(i, dp, n);
        }

        for (int i = 0; i + 2 < dp.size(); i++) {
            if (dp[i] <= n &&
                dp[i + 1] <= n - dp[i] &&
                dp[i + 2] == n - dp[i] - dp[i + 1]) {
                return true;
            }
        }

        return false;
    }
};