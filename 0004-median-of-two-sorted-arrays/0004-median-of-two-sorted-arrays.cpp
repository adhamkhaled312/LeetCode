class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n3=n1+n2;
        vector<int>merged(n3);
        int i=0;
        int j=0;
        int k=0;
        while(i < n1 && j < n2){
            if(nums1[i] <= nums2[j]){
                merged[k++] = nums1[i++];
            }
            else{
                merged[k++]=nums2[j++];
            }
        }
        while(i < n1){
            merged[k++] = nums1[i++];
        }    
        while(j < n2){
            merged[k++] = nums2[j++];
        }
        if(n3 % 2 == 0){
            return ((double (merged[n3/2])+merged[n3/2 -1])/2);
        }
        else{
            return merged[n3/2];
        } 
    }
};