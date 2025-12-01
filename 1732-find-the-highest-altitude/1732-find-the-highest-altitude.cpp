class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ret=0;
        int currentRet=0;
        for(int i=0;i<gain.size();i++){
            currentRet+=gain[i];
            ret=max(ret,currentRet);
        }
        return ret;
    }
};