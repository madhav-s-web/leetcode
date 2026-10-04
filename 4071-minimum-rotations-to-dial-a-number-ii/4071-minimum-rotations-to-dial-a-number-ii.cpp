class Solution {
    int minRotations( const string &s) {

        int cost=0;
        if(s[0]!='0'){
            int movingCost = s[0] -'0' ;
            int movingCostAnti = 10 - movingCost ;

            cost += min(movingCost,movingCostAnti);

         
        }
         
        for( int i=1 ; i<s.length() ; i++ ){
            int movingCost = abs(s[i]-'0' -( s[i-1] -'0'));
            int movingCostAnti = abs(10 - movingCost) ;

             cost += min(movingCost,movingCostAnti);
             
        }
        
        return cost;
    }
public:
int cost_of_pair(char x , char y ){
int movingCost = abs(x-'0' - ( y -'0'));
            int movingCostAnti = abs(10 - movingCost) ;
            return min(movingCost,movingCostAnti);
}
  
    int minRotations(int n, string s) {


        int minCost=INT_MAX;
        int totalCost =  minRotations(s); // total cost
      
          minCost = min(minCost,totalCost);
          
        for(int i=0 ; i < s.length()-1 ; i++){
           


            if( i==0){
                
                int pairTwoSub =  cost_of_pair('0',s[i]);
                

                

                 int addTwo = cost_of_pair( '0' , s[n-1] );

              int x  = totalCost - pairTwoSub + addTwo ;
              minCost= min(minCost,x);


            }

            else{
                 int pairOneSub = cost_of_pair(s[i-1],s[i]);
           
            
             
             int addOne = cost_of_pair(s[i-1],s[n-1]);
    
            int x  = totalCost - pairOneSub + addOne ;
            minCost= min(minCost,x);
            
            }
             
        }
        return minCost;
    }
};