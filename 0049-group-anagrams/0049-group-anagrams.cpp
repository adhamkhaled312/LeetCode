class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<int>> mp;
        vector<vector<string>> ret;
        vector<string> tempVec;
        string temp;
        for(int i=0;i<strs.size();i++){
            temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(i);
        }
        for (const auto& it : mp) {
            for (const int& val : it.second) {
              tempVec.push_back(strs[val]);
            }
            ret.push_back(tempVec);
            tempVec.clear();
        }
        return ret;
    }
};