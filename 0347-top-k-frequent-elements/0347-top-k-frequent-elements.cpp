class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<vector<int>>count(nums.size()+1);
        vector<int> ret;
        for(auto it : nums){
            freq[it]++;
        }


        for(auto &it : freq){
            count[it.second].push_back(it.first);
        }

        for(int i=count.size()-1 ; i >= 0; i--){
            for(int j : count[i]){
                ret.push_back(j);
                if(ret.size() == k){
                    return ret;
                }
            }
        }
        return ret;
    }
};