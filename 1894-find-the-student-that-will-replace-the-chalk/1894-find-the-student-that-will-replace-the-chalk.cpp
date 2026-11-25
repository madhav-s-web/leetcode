class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
         int n = chalk.size();

        long long  sum = 0 ;
         for(int x : chalk)sum+=x;

          while(k>=sum){
            k=k-sum;
          }

          if(sum==0)return chalk[n-1];

          for(int i=0;i<n;i++){
            if(k-chalk[i]<0)return i;
            else k=k-chalk[i];
          }
          return -1;
    }
};