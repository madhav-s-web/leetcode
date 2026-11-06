class Solution {
    // Returns true if the character is a vowel, otherwise false.
bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}
public:
    string reverseVowels(string s) {

        int low = 0;
        int high = s.length() - 1;
        while ( low <= high ) {

            if ( !isVowel(s[low]) )low++;
            else if(!isVowel(s[high]))high--;
            else{
                swap(s[low],s[high]);
                low++;
                high--;
                
            }
            
            
                
        }
        return s;
    }
};