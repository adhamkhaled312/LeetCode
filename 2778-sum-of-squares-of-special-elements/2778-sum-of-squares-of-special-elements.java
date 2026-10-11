class Solution {
    public int sumOfSquares(int[] nums) {
        int ret=0;
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(n%(i+1)==0) {
                ret += nums[i] * nums[i];
            }
        }
        return ret;
    }
}