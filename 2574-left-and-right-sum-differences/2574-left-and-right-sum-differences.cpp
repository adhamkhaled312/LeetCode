class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        if(nums.size() <= 1) return {0};
        int n=nums.size();
        vector<int>ret(n);
        int leftSum=0;
        int rightSum=accumulate(nums.begin(),nums.end(),0);


        for(int i=0;i<n;i++){
            rightSum -= nums[i];
            ret[i] = abs(leftSum-rightSum);
            leftSum += nums[i];
    
        }
        return ret;
    }
};