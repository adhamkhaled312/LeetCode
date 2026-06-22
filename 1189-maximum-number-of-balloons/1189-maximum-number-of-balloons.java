class Solution {
    public int maxNumberOfBalloons(String text) {
        int ret = Integer.MAX_VALUE;

        Map<Character, Integer> freq = new HashMap<>();
        for(char c:text.toCharArray()){
            freq.put(c,freq.getOrDefault(c,0)+1);
        }

        ret = Math.min(ret, freq.getOrDefault('b', 0));
        ret = Math.min(ret, freq.getOrDefault('a', 0));
        ret = Math.min(ret, freq.getOrDefault('l', 0) / 2);
        ret = Math.min(ret, freq.getOrDefault('o', 0) / 2);
        ret = Math.min(ret, freq.getOrDefault('n', 0));
        return ret;
    }
}