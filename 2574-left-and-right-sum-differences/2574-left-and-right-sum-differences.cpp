class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        if(nums.size()==0) return {0};
        int n=nums.size();
        vector<int> leftSum(n), rightSum(n), ret(n);

        for(int i=1;i<n;i++){
            leftSum[i]=nums[i-1]+leftSum[i-1];
        } 

        
        for(int i=n-2;i>=0;i--){
            rightSum[i] = nums[i+1]+rightSum[i+1];
        }  

        for(int i=0;i<n;i++){
            ret[i] = abs(leftSum[i]-rightSum[i]);
        }
        return ret;
    }
};