class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastChar = s.size()-1;
        int lastSpace;
        while(lastChar >=0 && s[lastChar]==' '){
            lastChar--;
        }
        for(int i =lastChar;i>=0;i--){
            if(s[i]==' '){
                lastSpace=i;
                break;
            }
      }
        return lastChar-lastSpace;
    }
};