class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int first=0;
        int last=k-1;
        int ret=0;
        for(int i=0;i <= last; i++) ret+=nums[i];
        int current=ret;
        while(last < nums.length-1){
            current=current-nums[first++]+nums[++last];
            ret = Math.max(ret,current);
        }

        return (double)ret/k;
    }
}