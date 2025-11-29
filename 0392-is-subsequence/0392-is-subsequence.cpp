class Solution {
public:
    bool isSubsequence(string s, string t) {
        int str1=0;
        int str2=0;
        while( str2 < t.size() && str1 < s.size()){
            if(s[str1] == t[str2]){
                str1++;
            }
            str2++;
        }
        return str1 == s.size();
    }
};