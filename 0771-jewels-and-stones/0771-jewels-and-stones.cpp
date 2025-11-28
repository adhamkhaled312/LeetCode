class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
           unordered_set<char>st;
           int ret=0;
           for(int i=0;i<jewels.size();i++){
            st.insert(jewels[i]);
           }
           for(int i=0;i<stones.size();i++){
            if(st.count(stones[i])) ret++;
           }
           return ret;
    }
};