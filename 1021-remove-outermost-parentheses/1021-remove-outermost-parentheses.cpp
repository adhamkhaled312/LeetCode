class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string temp="";
        for(int i=0; i<s.size();i++){
            char c=s[i];
            if(c=='('){
                if(!st.empty())temp.push_back(c);
                st.push(c);
            }
            else if(c==')'){
                st.pop();
                if(!st.empty()) temp.push_back(c);
            }
            else temp.push_back(c);
        }
        return temp;
    }
};