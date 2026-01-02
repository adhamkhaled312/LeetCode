class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>st;
        int ret=0;
        for(auto &i:nums){
            if(st.count(i)){
                ret=i;
                break;
            }
            else st.insert(i);
        }
        return ret;
    }
};