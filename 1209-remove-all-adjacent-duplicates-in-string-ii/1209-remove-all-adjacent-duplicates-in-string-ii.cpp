class Solution {
public:
    string removeDuplicates(string s, int k) {

        stack<pair<char,int>>st;
         st.push({s[0],1});

        for(int i=1 ; i < s.length() ; i++){
           
            if(!st.empty() && st.top().first == s[i] ){
                st.top().second++;
                 if(st.top().second==k)st.pop();
            }
             else st.push({s[i],1});
            
        }
        vector<int>ans;
        while(!st.empty()){
            for(int i=0;i<st.top().second;i++){
              ans.push_back(st.top().first);
            }
           
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        string y="";

        for(char ch : ans)y+=ch;
        return y;
    }
};