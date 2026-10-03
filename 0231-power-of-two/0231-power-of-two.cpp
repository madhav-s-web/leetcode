class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        if(n==1)return true;
        if( (n&1)==1)return false;

         n = n>>1;
         int count=0;
         while(n){
            if((n&1)==1){
                count++;
         }
         n = n>>1;
    }
    if(count==1)return true;
    return false;
    }
};