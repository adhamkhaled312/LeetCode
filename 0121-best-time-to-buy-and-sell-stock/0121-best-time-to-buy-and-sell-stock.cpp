class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret=0;
        int buyPrice=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buyPrice) buyPrice=prices[i];
            else ret=max(ret,prices[i]-buyPrice);
        }
        return ret;
    }
};