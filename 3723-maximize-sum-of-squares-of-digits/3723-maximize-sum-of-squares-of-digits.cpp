class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";

        if(num==1  && sum>9)return "";
      while(num){
        if(sum>=9){
            sum=sum-9;
            ans+='9';
        }
      else  if(sum>=8){
            sum=sum-8;
            ans+='8';
        }

        else  if(sum>=7){
            sum=sum-7;
            ans+='7';
        }

 else  if(sum>=6){
            sum=sum-6;
            ans+='6';
        }


 else  if(sum>=5){
            sum=sum-5;
            ans+='5';
        }

 else  if(sum>=4){
            sum=sum-4;
            ans+='4';
        }

 else  if(sum>=3){
            sum=sum-3;
            ans+='3';
        }

 else  if(sum>=2){
            sum=sum-2;
            ans+='2';
        }

 else  if(sum>=1){
            sum=sum-1;
            ans+='1';
        }
 else{
     ans+='0';
 }

        num--;
      }
      if(sum)return "";
      return ans;
    }
};