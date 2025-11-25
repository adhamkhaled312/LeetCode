class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int noTickets=tickets[k];
        int ret=0;
        for(int i=0;i<noTickets;i++){
            for(int j=0;j<tickets.size();j++){
                if(tickets[j]!=0){
                    ret++;
                    tickets[j]--;
                }
                if(tickets[k]==0) break;

            }
        }
        return ret;
    }
};