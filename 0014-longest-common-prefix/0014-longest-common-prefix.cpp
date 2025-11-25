class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        unsigned long longestString = 0;
        string prefix="";
        for(int i=0;i<strs.size();i++){
            longestString = max(longestString,strs[i].size());
        }
        cout<<longestString;
        for(int i=0;i<longestString;i++){
            char c=strs[0][i];
            bool same=true;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c){
                    same=false;
                    break;
                }
            }
            if(same) prefix.push_back(c);
            else break;
        }
        return prefix;
    }
};