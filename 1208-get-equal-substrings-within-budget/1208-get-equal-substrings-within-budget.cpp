class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start=0;
        int ret=0;
        int currentCost=0;
        for(int end=0;end<s.size();end++){
            currentCost+=abs(s[end]-t[end]);
            while(currentCost > maxCost){
                currentCost-=abs(s[start]-t[start]);
                start++;
            }
            ret=max(ret,end-start+1);
            
        }
        return ret;
    }
};