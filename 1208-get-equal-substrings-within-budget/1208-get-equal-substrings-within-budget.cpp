class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start=0;
        int end=0;
        int ret=0;
        int i=0;
        int currentCost=0;
        while(start<=end && i<s.size()){
            currentCost+=abs(s[i]-t[i]);
            if(currentCost > maxCost){
                currentCost-=abs(s[start]-t[start]);
                start++;
                end++;
            }else{
                end++;
                ret=end-start;
            }
            i++;
        }
        return ret;
    }
};