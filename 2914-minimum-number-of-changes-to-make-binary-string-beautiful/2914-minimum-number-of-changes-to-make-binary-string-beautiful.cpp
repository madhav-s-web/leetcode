class Solution {
public:

    int minChanges(string s) {
      int count=0;
     for(int i=0;i<s.length()-1;i+=2){
        if(s[i+1]!=s[i])count++;

     }
    return count;
    }
};