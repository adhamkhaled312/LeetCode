class Solution {
    public int repeatedNTimes(int[] nums) {
       Set<Integer> st = new HashSet<>();
       int ret=0;
       for(int n : nums){
            if(st.contains(n)){
                ret=n;
                break;
            }
            else st.add(n);
       } 
       return ret;
    }
}