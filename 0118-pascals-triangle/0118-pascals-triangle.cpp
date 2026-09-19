class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        
        temp.push_back(1);
        ans.push_back(temp);
        vector<int>prev;
        for(int i=2;i<=n;i++){
            vector<int>temp(i+1,0);
            for(int j=1;j<=i;j++){
                if(j==1)temp[1]=1;
               else if(j==i) temp[j]=1;
                else{
                    temp[j] = prev[j-1] + prev[j];
                }
            }
             vector<int> row(temp.begin() + 1, temp.end());
            ans.push_back(row);
            prev=temp;
        }
        return ans;
    }
};