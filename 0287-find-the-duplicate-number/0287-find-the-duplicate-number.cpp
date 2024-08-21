class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ret;
        int n=nums.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>1){
                ret=nums[i];
                break;
            }
        }
        return ret;
    }
};