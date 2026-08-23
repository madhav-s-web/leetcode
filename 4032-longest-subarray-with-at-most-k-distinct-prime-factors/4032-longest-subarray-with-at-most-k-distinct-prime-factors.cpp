class Solution {
vector<int>factors(int n){
   vector<int>f;
    for(int i=2; i*i <= n ; i++ ){

        if( n % i ==0 )f.push_back(i);

        while(n % i ==0){
            n=n/i;
        }
    }
   if(n!=1)f.push_back(n);
   return f;

}


public:
    int longestSubarray(vector<int>& nums, int k) {

        map<int,int>mpp;
        int distinct=0;
        int left = 0;
        int ans=0;

        for(int right=0 ; right<nums.size(); right++){
           vector<int> f = factors(nums[right]);

            for(int pf : f){
               if( mpp[pf]==0 ){
                distinct++;
              
               }
                 mpp[pf]++;
        }
        while(distinct > k ){
            vector<int> leftFactors = factors(nums[left]);

            for( int x :leftFactors ){
                mpp[x]--;

                if(mpp[x]==0)distinct--;
            }
            left++;
        }
        ans = max(ans, right - left + 1);
     }
        
return ans;
        
    }
};