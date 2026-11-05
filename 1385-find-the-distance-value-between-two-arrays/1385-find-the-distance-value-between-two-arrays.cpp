class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int count=0;
        
        for(int i=0;i<arr1.size();i++){
            int n = arr2.size();
             int lowerBound = lower_bound(begin(arr2),end(arr2),arr1[i]) - begin(arr2);

             if(lowerBound==n){
                count+=  (arr1[i]-arr2[n-1]>d);
             }
             else if(lowerBound==0){
                 count+=  (arr2[0] - arr1[i]) > d;
             }
             else{
                count+=  (arr1[i]-arr2[lowerBound-1])>d && (arr2[lowerBound]-arr1[i])>d;
             }
        }
        return count;
        
    }
};