class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int noTickets=tickets[k];
        int ret=0;
        for(int i=0;i<tickets.size();i++){
            if(i<=k) ret+=min(tickets[i],noTickets);
            else ret+=min(tickets[i],noTickets-1);
        }
        return ret;
    }
};