class Solution {
    int digitSum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

public:
    int minSwaps(vector<int>& nums) {

        unordered_map<int,int>mpp; // storing old indixes
        for( int i=0 ; i < nums.size() ; i++ ){
            mpp[nums[i]] = i ;
        }

        auto lamda = [&](int num1 ,  int num2){

            int digi1 =  digitSum(num1);
            int digi2 =  digitSum(num2);

            if(digi1!=digi2) return digi1<digi2;

            return num1<num2;
        };
        vector<int>afterSorted(nums);


        sort(afterSorted.begin(),afterSorted.end(), lamda);
         
         int count = 0 ;

        for( int i = 0 ; i < nums.size() ; i++ ){
            int expectedValue = afterSorted[i];
            int currentValue =  nums[i];


            if(expectedValue == currentValue)continue;

            int indexExpectedValue = mpp[expectedValue];

             nums[i] = expectedValue;
             nums[indexExpectedValue] = currentValue;
            mpp[expectedValue]=i;
            mpp[currentValue] = indexExpectedValue;

            count++;
        }

        return count;
    }
};