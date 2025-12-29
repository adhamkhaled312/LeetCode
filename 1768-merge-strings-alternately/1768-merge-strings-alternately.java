class Solution {
    public String mergeAlternately(String word1, String word2) {
        int firstWord=0;
        int secondWord=0;
        StringBuilder ret = new StringBuilder();
        while(firstWord<word1.length() && secondWord<word2.length()){
            ret.append(word1.charAt(firstWord));
            ret.append(word2.charAt(secondWord));

            firstWord++;
            secondWord++;
        }
        while(firstWord<word1.length()) ret.append(word1.charAt(firstWord++));
        while(secondWord<word2.length()) ret.append(word2.charAt(secondWord++));
        
        return ret.toString();
    }
}