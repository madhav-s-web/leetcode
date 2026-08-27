class Solution {
public:
    bool checkValidString(string s) {

        int low = 0;
        int high = 0;

        for(char c : s) {

            if(c == '(') {
                low++;
                high++;
            }

            else if(c == ')') {
                low--;
                high--;
            }

            else { // '*'
                low--;     // '*' acts as ')'
                high++;    // '*' acts as '('
            }

            // We cannot have negative minimum opens
            low = max(0, low);

            // Even maximum opens became negative
            if(high < 0)
                return false;
        }

        return low == 0;
    }
};