class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>st;
        for(int i=0;i<candyType.size();i++){
            st.insert(candyType[i]);
        }
        return min(st.size(),candyType.size()/2);
    }
};