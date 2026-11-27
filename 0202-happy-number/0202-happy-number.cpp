class Solution {
public:
    bool isHappy(int n) {

        set<int>st;

        while(true){
            int count=0;
            while(n){
              int  x = n%10;
              count+=x*x;
              n=n/10;
            }

           if( st.find(count)!=st.end() )return false;
            if(count==1 )return true;
            st.insert(count);
            n=count;
            
        }
        return false;
    }
};