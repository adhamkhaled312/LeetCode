class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return (subarrayWithAlmostK(nums,k)- subarrayWithAlmostK(nums,k-1));
    }
    int subarrayWithAlmostK(vector<int>& nums,int k){
        unordered_map<int,int> map;
        int left = 0 , right = 0,ans = 0;
        while(right<nums.size()){
            map[nums[right]]++;
            while(map.size()>k){
                map[nums[left]]--;
                if(map[nums[left]]==0)map.erase(nums[left]);
                left++;
            }
            ans += right-left+1;
            right++;
        }
        return ans;
    }
};