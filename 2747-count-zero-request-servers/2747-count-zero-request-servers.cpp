class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {

        auto lamda = [](vector<int>a,vector<int>b ){
              return a[1]<b[1];
        };

        sort(logs.begin(),logs.end(),lamda);
        int q = queries.size();
        vector<int>array(q,0);
        
        vector<pair<int,int>>timeIndex(q);
        for( int i=0;i<q;i++){
            timeIndex[i] = {queries[i],i};
        }

        sort(timeIndex.begin(),timeIndex.end());
        unordered_map<int,int>mpp;
        int i=0;
        int j=0;

        int m = logs.size();

       for(auto it : timeIndex){
        int time = it.first;
        int index = it.second;


        int lowerRange = time-x;
        int highRange = time;

        while(j<m && logs[j][1]<=highRange){
            mpp[logs[j][0]]++;
            j++;
        }

        while (i < j && logs[i][1] < lowerRange) {
                int server = logs[i][0];
                mpp[server]--;

                if (mpp[server] == 0)
                    mpp.erase(server);

                i++;
            }

        int x = n - mpp.size();
        array[index]= x;
       }
        return array;
    }
};