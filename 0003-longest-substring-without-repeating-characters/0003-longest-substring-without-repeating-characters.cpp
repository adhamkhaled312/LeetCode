class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0 || s.size()==1) return s.size();
        unordered_set<char>st;
        int ptr1=0;
        int ptr2=1;
        int ret=0;
        int current=1;
        st.insert(s[ptr1]);
        while(ptr1<=ptr2 && ptr2<=s.size()-1){
            if(st.find(s[ptr2])==st.end()){
                st.insert(s[ptr2]);
                ptr2++;
                current++;                
            }else{
                while(st.find(s[ptr2])!=st.end()){
                    st.erase(s[ptr1]);
                    ptr1++;
                    current--;
                }
            }
            ret=max(ret,current);
        }
        return ret;
    }
};