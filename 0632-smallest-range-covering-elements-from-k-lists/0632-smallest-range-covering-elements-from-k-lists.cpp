class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int>> merged;
        vector<int> ret;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++) merged.push_back({nums[i][j],i});
        }
        sort(merged.begin(),merged.end());
        unordered_map<int,int>count;
        int groups = 0;
        int left=0;
        for(int right=0;right<merged.size();right++){
            if(!count[merged[right].second]++)groups++;
            if(groups==n){
                while(count[merged[left].second]>1) --count[merged[left++].second];
                if(ret.empty()){
                    ret.push_back(merged[left].first);
                    ret.push_back(merged[right].first);
                }
                else{
                    int currentRet = ret[1] - ret[0];
                    int tempRet = merged[right].first - merged[left].first;
                    if((tempRet < currentRet) || (tempRet ==currentRet && merged[left].first < ret[0] )){
                        ret[0] = merged[left].first;
                        ret[1] = merged[right].first;
                    }
                }
            }
        }
        return ret;
    }
};