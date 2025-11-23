class Solution {
public:
    int arrangeCoins(int n) {
        int ret = 0;
        int temp=n;
        for(int i=1; i<=n; i++){
            temp-=i;
            if(temp>=0){
                ret++;
            }
            else{
                break;
            }
        }
        return ret;
    }
};