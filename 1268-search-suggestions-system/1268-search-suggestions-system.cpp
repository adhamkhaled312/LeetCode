class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord) {
        vector<string>temp(products);
        vector<vector<string>>ret;
        int start=0;
        int end=temp.size()-1;
        sort(temp.begin(),temp.end());
        for(int i=0;i<searchWord.size();i++){
            while(start<=end && ( temp[start].size() <= i || temp[start][i] < searchWord[i]))
                start++;
            while(start<=end && ( temp[end].size() <= i || temp[end][i] > searchWord[i]))
                end--;

            vector<string>tempRet;
            for(int j=start; j<=end && tempRet.size()<3;j++){
                tempRet.push_back(temp[j]);
            }
            ret.push_back(tempRet);
        }
        return ret;
    }
};