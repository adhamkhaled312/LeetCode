class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int> domainsMap;
        vector<string> ret;
        for(int i=0;i<cpdomains.size();i++){
            int idx=cpdomains[i].find(' ');
            int count = stoi(cpdomains[i].substr(0,idx));
            string domain = cpdomains[i].substr(idx+1, cpdomains[i].size()-idx+1);
            domainsMap[domain]+=count;

            for(int j=0;j<domain.size();j++){
                if(domain[j]=='.'){
                    string temp = domain.substr(j+1,domain.size() - j-1);
                    domainsMap[temp]+=count;
                }
            }
        }
        for(auto &i:domainsMap){
            string temp = to_string(i.second) + ' ' + i.first;
            ret.push_back(temp);
        }
        return ret;
    }
};