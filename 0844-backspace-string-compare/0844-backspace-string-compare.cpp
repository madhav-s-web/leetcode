class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>s1;
        for (char c : s) {
    if (c == '#' && !s1.empty()) {
        s1.pop_back();
    }
    else if (c != '#') {
        s1.push_back(c);
    }
}
        vector<char>s2;
for (char c : t) {
    if (c == '#' && !s2.empty()) {
        s2.pop_back();
    }
    else if (c != '#') {
        s2.push_back(c);
    }
}
        if(s1.size()!=s2.size())return false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])return false;
        }
        return true;
    }
};