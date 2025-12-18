class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>roman;
        int ret=0;
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;

        for(int i=0;i<s.size()-1;i++){
            if(roman[s[i]]>=roman[s[i+1]])
                ret+=roman[s[i]];
            else
                ret-=roman[s[i]];
            cout<<ret<<endl;
        }
        ret+=roman[s[s.size()-1]];
        return ret;
    }

};