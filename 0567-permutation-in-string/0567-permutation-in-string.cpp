class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool ret=false;
        unordered_map<char,int> s1Freq;
        unordered_map<char,int> s2Freq;
        if(s1.length()>s2.length()) return false;
        for(int i=0; i<s1.length();i++){
            s1Freq[s1[i]]++;
            s2Freq[s2[i]]++;
        } 
        if(s2Freq == s1Freq){
            return true;
        }
        int left=0;
        int right=s1.length();
        while(right < s2.length()){
            s2Freq[s2[right]]++;
            s2Freq[s2[left]]--;

            if(s2Freq[s2[left]] == 0) s2Freq.erase(s2[left]);
            if(s2Freq == s1Freq){
                ret = true;
                break;
            }
            right++;
            left++;
        }
        return ret;
    }
};