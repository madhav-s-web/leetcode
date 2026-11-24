class Solution {

    // Finds GCD by checking every possible divisor.
//// Calculates the GCD of elements from start to end.
int gcd(int start, int end, vector<int>& nums) {
    int mn = *min_element(nums.begin() + start, nums.begin() + end + 1);

    for (int i = mn; i >= 1; i--) {
        bool found = true;

        for (int j = start; j <= end; j++) {
            if (nums[j] % i != 0) {
                found = false;
                break;
            }
        }

        if (found) return i;
    }

    return 1;
}

// Calculates the LCM of elements from start to end.
int lcm(int start, int end, vector<int>& nums) {
    int num = *max_element(nums.begin() + start, nums.begin() + end + 1);

    while (true) {
        bool found = true;

        for (int j = start; j <= end; j++) {
            if (num % nums[j] != 0) {
                found = false;
                break;
            }
        }

        if (found) return num;

        num++;
    }
}
public:
    int maxLength(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();

        for(int i=0;i<n;i++){
            long long  product = 1;
            for(int j=i;j<n;j++){
                if (product > LLONG_MAX / nums[j]) {
                     break;
                    }
                product *= 1ll*nums[j];
              
               int GCD =  gcd(i , j,nums);
               int LCM =  lcm(i , j,nums);

              if(product == GCD*LCM) maxi = max(maxi,j-i+1);
            }
        }
        return maxi;
    }
};