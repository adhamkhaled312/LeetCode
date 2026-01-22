class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        if(nums.size()<=1) return 0;
        int ret=0;
        while(true){
            if(is_sorted(nums.begin(),nums.end())) break;
            int minSum=INT_MAX;
            int element;
            for(int i=0;i<nums.size()-1;i++){
                int currentSum=nums[i]+nums[i+1];
                if(currentSum < minSum){
                    minSum=currentSum;
                    element=i;
                }
            }
            ret++;
            nums.erase(nums.begin() + element,
                       nums.begin() + element + 2);
            nums.insert(nums.begin() + element, minSum);
            }
        return ret;
    }
};