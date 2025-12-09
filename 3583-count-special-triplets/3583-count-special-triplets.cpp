class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        unordered_map<long long, long long> leftCount;   
        unordered_map<long long, long long> rightCount;  
        long long ret = 0;

        // Count all numbers to the right initially
        for (int num : nums) rightCount[num]++;

        for (int j = 0; j < nums.size(); j++) {
            long long val = nums[j];
            rightCount[val]--;  // remove current j from right

            long long target = val * 2;

            long long count_i = leftCount[target];   // i < j
            long long count_k = rightCount[target];  // k > j

            ret = (ret + count_i * count_k) % MOD;   // add modulo once

            leftCount[val]++;  // mark j as seen
        }

        return (int)ret;
    }
};
