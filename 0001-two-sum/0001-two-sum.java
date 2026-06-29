class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        int[] ret = {0};
        for(int i=0;i<nums.length;i++){
            map.put(nums[i],i);
        }
        for(int i=0;i<nums.length;i++){
            int temp = target-nums[i];
            Integer val = map.get(temp);
            if(val!=null && val!=i){
                ret = new int[]{i, val};
                break;
            }
        }
        return ret;
    }
}