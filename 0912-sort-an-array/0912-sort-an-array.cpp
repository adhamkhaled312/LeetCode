class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
    
    void mergeSort(vector<int>&arr, int l, int r) {
        if (l < r) {
            int mid = l + (r - l) / 2;

            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);

            merge(arr,l,mid,r);
        }
    }

    void merge(vector<int>&arr, int l, int m, int r) {
        const int size1 = m - l + 1;
        int size2 = r - m;
        vector<int>leftArr(size1);
        vector<int>rightArr(size2);

        for (int i = 0; i < size1; i++) {
            leftArr[i] = arr[l + i];
        }
        for (int i = 0; i < size2; i++) {
            rightArr[i] = arr[m + 1 + i];
        }

        int i = 0;
        int j = 0;
        int k = l;
        while (i < size1 && j < size2) {
            if (leftArr[i] < rightArr[j]) arr[k++] = leftArr[i++];
            else arr[k++] = rightArr[j++];
        }

        while (i < size1) arr[k++] = leftArr[i++];
        while (j < size2) arr[k++] = rightArr[j++];
    }
};