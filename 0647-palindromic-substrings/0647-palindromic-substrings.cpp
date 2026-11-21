class Solution {
    int find(int start , int end , string &s){
        int count=0;
     while(start>=0 && end<s.length() && s[start]==s[end]){
        count++;
        start--;
        end++;
     }
     return count;
    }
public:
    int countSubstrings(string s) {
        int count = 0;
        
        for(int i = 0; i < s.length() ; i++){
            int evenCount = find(i,i+1,s);
            count+=evenCount;
            int oddCount = find(i,i,s);
             count+=oddCount;
           
        }
        return count;
    }
};