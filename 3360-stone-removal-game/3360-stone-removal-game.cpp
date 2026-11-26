class Solution {
public:
    bool canAliceWin(int n) {
        int flag = 0 ; //alice
        int x = 10 ; 
        if(n<10)return false;
       
        while(n-x>=0){
            n = n-x;
            flag = 1-flag;
            x--;
        }
        if(flag ==1)return true;
        return false;
    }
};