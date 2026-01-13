class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length()) return "";
        int tsize=t.length();
        int ret=INT_MAX;
        int startLeft;
        unordered_map<char,int> tmap;
        for(char c : t){
            tmap[c]++;
        }

        int left=0,right=0;
        while(right < s.size()){
            char currChar = s[right];
            if(tmap[currChar] > 0) {
                tsize--;
            }
            tmap[currChar]--;
            while(tsize == 0){
                currChar = s[left];
                int currWindow = right - left + 1;
                if(currWindow < ret){
                    ret = currWindow;
                    startLeft = left;
                }

                tmap[currChar]++;
                if(tmap[currChar] > 0) tsize++;

                left++;
            }
            right++;
        }
        return ret == INT_MAX ? "" : s.substr(startLeft,ret);
    }
};