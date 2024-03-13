class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int m=prices[0];
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-m;
            ans=max(ans,cost);
            m=min(m,prices[i]);
        }
        return ans;
    }
};