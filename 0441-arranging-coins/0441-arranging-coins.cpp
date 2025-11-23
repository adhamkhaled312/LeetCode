class Solution {
public:
    int arrangeCoins(int n) {
        int l=0;
        int r=n;
        int mid;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(n >= mid*(mid+1)/2) l=mid+1;
            else r = mid-1;
        }
        return l-1;

    }
};