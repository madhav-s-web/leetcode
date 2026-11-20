
class Solution {
public:
    int minOperations(int n) {
        int count = 0;

        while (n > 0) {
            if ((n & (n - 1)) == 0)
                return count + 1;

            if (n % 2 == 0) {
                n /= 2;
            } else if ((n & 2) != 0) {
                n++;
                count++;
            } else {
                n--;
                count++;
            }
        }

        return count;
    }
};
