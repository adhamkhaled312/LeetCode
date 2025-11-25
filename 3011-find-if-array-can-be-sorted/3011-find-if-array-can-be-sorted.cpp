class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int prevMax = INT_MIN;
        int currMax = nums[0];
        int currMin = nums[0];
        int setBits = __builtin_popcount(nums[0]);

        for (int i = 1; i < nums.size(); i++) {
            int currBits = __builtin_popcount(nums[i]);
            if (setBits == currBits) {
                currMax = max(currMax, nums[i]);
                currMin = min(currMin, nums[i]);
            } else {
                if (currMin < prevMax)
                    return false;

                prevMax = currMax;
                currMin = nums[i];
                currMax = nums[i];
                setBits = currBits;

            }
        }
        return currMin > prevMax;
    }
};