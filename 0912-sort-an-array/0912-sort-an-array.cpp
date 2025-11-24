class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
    
    void quickSort(vector<int>&arr, int l, int r) {
        if(l>r) return;
        int mid = l+(r-l)/2;
        int pivot = arr[mid];
        swap(arr[mid],arr[r]);
        int pi=l;
        for(int i=l; i<r; i++){
            if(arr[i] < pivot){
            swap(arr[i],arr[pi]);
            pi++;
            }
        }
        swap(arr[pi],arr[r]);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }

};