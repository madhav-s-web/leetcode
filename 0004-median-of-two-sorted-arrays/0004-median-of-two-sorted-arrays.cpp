class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;int j=0;
       
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int index2=n/2;
        int index1=index2-1;
        
        int index1_ele=-1;
        int index2_ele=-1;
        int count=0;
        while(i<n1 && j<n2){
            if(nums1[i]<=nums2[j]){
                if(count==index2)index2_ele=nums1[i];
                if(count==index1)index1_ele=nums1[i];
                count++;
                i++;
            }
            else{
                if(count==index2)index2_ele=nums2[j];
                if(count==index1)index1_ele=nums2[j];
                count++;
                j++;
            }
        }
        while(i<n1){
            if(count==index2)index2_ele=nums1[i];
                if(count==index1)index1_ele=nums1[i];
                count++;
                i++;
        }
        while(j<n2){
            if(count==index2)index2_ele=nums2[j];
                if(count==index1)index1_ele=nums2[j];
                count++;
                j++;
        }
        if(n%2!=0)return (double)index2_ele;
        else{
            double answer=((double)index2_ele+(double)index1_ele)/2;
            return answer;
        }
    }
};