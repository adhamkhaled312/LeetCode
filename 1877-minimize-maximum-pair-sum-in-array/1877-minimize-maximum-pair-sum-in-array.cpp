class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==2) return nums[0]+nums[1];
        int ret=INT_MIN;
        int left=0,right=nums.size()-1;
        while(left<right){
            ret=max(ret,nums[left]+nums[right]);
            left++;right--;
        }
        return ret;

    }
};