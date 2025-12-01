class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
           unordered_map<char,int>mp;
           int ret=0;
           for(int i=0;i<stones.size();i++){
            mp[stones[i]]++;
           }
           for(int i=0;i<jewels.size();i++){
            ret+=mp[jewels[i]];
           }
           return ret;
    }
};