class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char curr=s[i];
            if(curr=='{' || curr=='(' || curr=='['){
                st.push(curr);
            }
            else{
                if(st.empty() || (curr=='}' && st.top()!='{') || (curr==')'&& st.top()!='(') ||
                    (curr==']'&& st.top()!='[')){
                        return false;
                }
                st.pop();
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};