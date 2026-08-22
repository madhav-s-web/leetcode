class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gPointer=0;
        int sPointer=0;
        int count=0;
        while( gPointer< g.size()  && sPointer< s.size()){
            if(s[sPointer]>= g [gPointer]){
            count++;
            gPointer++;
            sPointer++;
            continue;
            }
            sPointer++;
        }
        return count;
    }
};