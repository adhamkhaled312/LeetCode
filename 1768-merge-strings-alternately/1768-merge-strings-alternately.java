class Solution {
    public String mergeAlternately(String word1, String word2) {
        int firstWord=0;
        int secondWord=0;
        String ret = "";
        while(firstWord<word1.length() && secondWord<word2.length()){
            ret += (word1.charAt(firstWord));
            ret += (word2.charAt(secondWord));

            firstWord++;
            secondWord++;
        }
        while(firstWord<word1.length()) ret += (word1.charAt(firstWord++));
        while(secondWord<word2.length()) ret += (word2.charAt(secondWord++));
        
        return ret;
    }
}