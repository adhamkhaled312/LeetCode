class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>resultMap;
        vector<vector<string>> ret;
        for(auto & s : strs){
            vector<int> count(26,0);
            for(auto c : s){
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for(int i=1; i<26; i++){
                key += ',' + to_string(count[i]);
            }
            resultMap[key].push_back(s);
        }
        for(auto& it : resultMap){
            ret.push_back(it.second);
        }
        return ret;
    }
};