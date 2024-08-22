class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index=-1;
        int left=0;
        int right=nums.size()-1;
        while(right >= left){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                index=mid;
                break;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return index;
    }
};