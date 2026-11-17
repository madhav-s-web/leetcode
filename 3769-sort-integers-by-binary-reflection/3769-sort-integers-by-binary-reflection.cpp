class Solution {
    // Converts a positive integer to its binary representation.
int binaryReverse(int n) {
    string ans = "";

    while (n > 0) {
        ans += (n % 2) + '0';
        n /= 2;
    }
    reverse(ans.begin(),ans.end());
    
    int sum = 0 ;
    for(int i=0;i<ans.size();i++){
        int y = ans[i] - '0';
        sum += y * pow(2, i);
    }
    
    return sum;
}
public:
    vector<int> sortByReflection(vector<int>& nums) {

        vector<pair<int,int>>temp;

        for(int i=0;i<nums.size();i++){
            cout<<binaryReverse(nums[i])<<" ";
            temp.push_back( {binaryReverse(nums[i]) ,nums[i]  } ) ;

        }
        sort(temp.begin(),temp.end());
        vector<int>ans;
        for(auto it : temp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};