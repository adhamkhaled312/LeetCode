class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>preSum;
        preSum.push_back(0);
        int ret=0;
        for(int i=0;i<gain.size();i++){
            preSum.push_back(preSum[i]+gain[i]);
            ret=max(ret,preSum.back());
        }
        return ret;
    }
};