class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int note5= 0 ;
        int note10= 0 ;
        int note20= 0 ;


        
          
        for(int i=0; i<bills.size() ; i++){
            
            if(bills[i]==5) note5++;
         
         if(bills[i]==10){
            if(note5)note5--;
            else return false;
            
            note10++;
         }
         else if(bills[i]==20){

            if(note5 <= 0 ) return false;
            if(note10==0){
                 if(note5>=3) note5 = note5-3;
                 else return false;
                note20++;
              
                
                continue;
            }
            note10--;
            note5--;
         }
      }
      return true;
    }
};