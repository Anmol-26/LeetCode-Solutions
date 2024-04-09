class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
       int n=tickets.size();
       int ans=tickets[k];
        for(int i=0;i<k;i++){
            ans+=min(tickets[k],tickets[i]);
        }
        for(int i=k+1;i<n;i++){
            ans+=min(tickets[k]-1,tickets[i]);
        }
        return ans;
    }
};