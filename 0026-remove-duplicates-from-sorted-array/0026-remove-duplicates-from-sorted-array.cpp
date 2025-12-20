class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int slow=0;
        int fast=0;
        while(fast<nums.size()){
            if(nums[slow]==nums[fast]){
                fast++;
            }
            else{
                slow++;
                nums[slow]=nums[fast];
            }
        }
        return slow+1;
    }
};