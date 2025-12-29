class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = *max_element(candies.begin(),candies.end()); 
        vector<bool>ret(candies.size());

        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxCandy) ret[i]=true;
            else ret[i]=false;
        }
        return ret;
    }
};