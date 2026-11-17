class Solution {

    int findVowel(int start, int end,string &s) {
        int count = 0;
        for(int i=start;i<=end;i++){
         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u')
            count++ ;
        }
        

                return count;
    }

public:
    string reverseWords(string s) {
        int i = 0;
        int x = 0;

        while ( x<s.length() && s[x] != ' ')
            x++;
        int temp = findVowel(i, x - 1,s);
        x = x + 1;

         i = x;
        x = i;

        while (x < s.length()) {

            while ( x< s.length() && s[x] != ' ') {
                x++;
            }
            if (findVowel(i, x - 1,s) == temp)
                reverse(s.begin() + i, s.begin() + x); // reverse;
                    i = x + 1;
            x = i;
        }
        return s;
    }
};