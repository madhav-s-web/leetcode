class Solution {
public:
    bool checkString(string s) {

        int lastIndexA = -1 ;
        int firstIndexB = -1 ;

        for( int i=0;i<s.length();i++ ){
            if( s[i] == 'a' )lastIndexA=i;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='b'){
                firstIndexB=i;
                break;
            }
        }

        if(firstIndexB==-1 || lastIndexA==-1)return true;
        if(lastIndexA<firstIndexB)return true;
        return false;;
    }
};