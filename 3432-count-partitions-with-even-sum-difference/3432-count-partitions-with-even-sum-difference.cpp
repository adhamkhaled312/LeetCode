class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ret=0;
        vector<int>prefix(nums.size());
        int postfix=0;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size()-1;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=nums.size()-1;i>0;i--){
            postfix+=nums[i];
            if(abs(postfix-prefix[i-1])%2==0) ret++;
        }
        return ret;
    }
};