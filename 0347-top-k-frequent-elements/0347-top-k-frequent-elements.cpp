class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(auto it : nums){
            freq[it]++;
        }
        auto comp = [](pair<int,int>&a, pair<int,int>&b){
            return b.second > a.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> heap(comp);
        for(auto it : freq){
            heap.push({it.first,it.second});
        }
        vector<int> ret;
        while(k--){
            ret.push_back(heap.top().first);
            heap.pop();
        }
        return ret;
    }
};