class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        unsigned long shortestString = 202;
        string prefix="";
        for(int i=0;i<strs.size();i++){
            shortestString = min(shortestString,strs[i].size());
        }
        for(int i=0;i<shortestString;i++){
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