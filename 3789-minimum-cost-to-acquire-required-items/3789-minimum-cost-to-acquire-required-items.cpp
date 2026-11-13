class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long lol1 = 1LL*cost1*need1;
        long long lol2 = 1LL*cost2*need2;
        long long lol3 = 1LL*lol1+lol2;


        long long maxi = max(need1,need2);
         long long takingOnlyBothCost = maxi*costBoth;


        long long mini = min(need1,need2);
         long long extraCost=0;
        if(need1>need2){
           extraCost =  1LL*(need1-need2)*cost1;
        }
        else if(need2>need1){
               extraCost =  1LL*(need2-need1)*cost2;
        }

       
        long long minBothCost =1LL* mini*costBoth + extraCost;

        takingOnlyBothCost= min(takingOnlyBothCost,minBothCost);

        

        return min(takingOnlyBothCost,lol3);


        
    }
};