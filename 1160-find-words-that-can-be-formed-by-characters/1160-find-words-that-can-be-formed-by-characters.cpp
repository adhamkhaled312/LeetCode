class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>freq;
        int ret=0;
        bool count;
        for(int i=0;i<chars.size();i++){
            freq[chars[i]]++;
        }   
        for(int i=0;i<words.size();i++){
            unordered_map<char,int>temp;
            count=true;
            for(int j=0;j<words[i].size();j++){
                char ch=words[i][j];
                temp[ch]++;
                if(temp[ch] > freq[ch]){
                    count=false;
                    break;
                }
            }
            if(count) ret+=words[i].size();
        }
        return ret;
    }
};