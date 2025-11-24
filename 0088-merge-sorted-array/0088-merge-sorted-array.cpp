class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp(nums1);
        int l=0,r=0,i=0;
        while(l<m && r<n){
            if(temp[l] < nums2[r]) nums1[i++]=temp[l++];
            else nums1[i++]=nums2[r++];
        }
        while(l<m)nums1[i++]=temp[l++];
        while(r<n)nums1[i++]=nums2[r++];
    }
};