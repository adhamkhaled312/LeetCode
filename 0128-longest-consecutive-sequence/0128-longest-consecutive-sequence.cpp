class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1){
            return nums.size();
        }
        int ret=0;
        int tempRet=1;
        unordered_set<int> temp(nums.begin(),nums.end());
        for(int num : temp){
            if(!temp.count(num-1)){
                int x=num+1;
                while(temp.count(x)){
                    tempRet++;
                    x++;
                }
                ret=max(ret,tempRet);
                tempRet=1;
            }
        }
        return ret;
    }
};