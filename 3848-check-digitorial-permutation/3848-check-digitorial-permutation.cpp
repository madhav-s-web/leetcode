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
        vector<int> digitFrequency(10,0);

        while (x > 0) {
            int digit = x % 10;
           digitFrequency[digit]++;
            sum += factorials[digit];
            x /= 10;
        }

        if  ( sum == n ) return true;
        
         vector<int>sumDigitFreq(10,0) ;

         while(sum>0){
            int digit = sum % 10;
             sumDigitFreq[digit]++;
             sum=sum/10;
         }

         for(int i=0;i<10;i++){
            if(sumDigitFreq[i]!=digitFrequency[i])return false;
         }
        return true;
    }
};