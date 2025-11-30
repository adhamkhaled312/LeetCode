class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ret=0;
        priority_queue<int>pq(nums.begin(),nums.end());
        while(k--){
            int top=pq.top();
            ret+=top;
            pq.pop();
            pq.push(ceil(top/3.0));
        }
        return ret;
    }
};