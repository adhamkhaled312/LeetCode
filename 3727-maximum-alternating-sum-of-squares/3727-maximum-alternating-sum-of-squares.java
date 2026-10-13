class Solution {
    public long maxAlternatingSum(int[] nums) {
        nums = Arrays.stream(nums)
                .map(Math::abs)
                .toArray();
        Arrays.sort(nums);
        long ret = 0;
        for(int i = 0; i < nums.length/2; i++) {
            ret-= (long) nums[i] * nums[i];
        }
        for(int i = nums.length/2; i < nums.length; i++) {
            ret+= (long) nums[i] * nums[i];
        }
        return ret;
    }
}