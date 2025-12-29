class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        vector<int> ret(n, 0);
        int count = boxes[0]-'0';

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + count;
            count += boxes[i]-'0';
        }
        

        count = boxes[n-1] - '0';

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + count;
            count += boxes[i]-'0';
        }

        for (int i = 0; i < n; i++) {
            ret[i] = prefix[i] + suffix[i];
        }

        return ret;
    }
};