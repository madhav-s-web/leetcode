class Solution {
public:
    int minRange(int a, int b, int c) {

        vector<int>temp;

        temp.push_back(a);
        temp.push_back(b);
        temp.push_back(c);
     
        sort(temp.rbegin(),temp.rend());

        int mini = temp[0]-temp[2];

        temp[0] = temp[1]+temp[2];

       int  mini2 = temp[0]-temp[2];




        return min(mini,mini2);
    }
};