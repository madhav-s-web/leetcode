class Solution {
public:
    int compress(vector<char>& chars) {
        int x = chars[0];
        string s = "";
        for(int i=0;i<chars.size();i++){
            int j=i+1;
            while( j<chars.size() && chars[i]==chars[j])j++;
            s+=(chars[i]);
            if(j-i>1) s+= to_string(j-i);
           
            i=j-1;
            

        }
        for (int i = 0; i < s.length(); i++) {
          chars[i] = s[i];
        }
        return s.length();
    }
};