class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        vector<int>postfix(n);
        postfix[n-1]=nums[n-1];
        
        for(int i=1;i<n;i++){
            prefix[i]=nums[i]+prefix[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            postfix[i]=nums[i]+postfix[i+1];
        }
        for(int i=0;i<nums.size();i++){
            if(postfix[i]==prefix[i]) return i;
        }
        return -1;
    }
};