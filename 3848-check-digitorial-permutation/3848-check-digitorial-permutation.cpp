class Solution {
    // Calculates the factorial of a digit.
    int fact(int n) {
        int ans = 1;
        for (int i = 2; i <= n; i++) {
            ans *= i;
        }
        return ans;
    }

public:
    bool isDigitorialPermutation(int n) {
        vector<int> factorials(10);
        for (int i = 0; i < 10; i++) {
            factorials[i] = fact(i);
        }

        int x = n, sum = 0;
        vector<int> digitValue;

        while (x > 0) {
            int digit = x % 10;
            digitValue.push_back(digit);
            sum += factorials[digit];
            x /= 10;
        }

        if (sum == n) return true;

        sort(digitValue.begin(), digitValue.end());

        while (true) {
    long long tempNum = 0;

    // Skip permutations that start with zero.
    if (digitValue[0] != 0) {
        for (int digit : digitValue) {
            tempNum = tempNum * 10 + digit;
        }

        if (tempNum == sum) return true;
    }

    if (!next_permutation(digitValue.begin(), digitValue.end())) {
        break;
    }
}
        return false;
    }
};