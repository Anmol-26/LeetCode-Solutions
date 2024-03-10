class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int ans=0;
        priority_queue<int>maxh;
        for(auto i:piles){
            maxh.push(i);
        }
        while(k--){
            int x=maxh.top();
            int y=floor(x/2);
            x-=y;
            maxh.pop();
            maxh.push(x);
        }
        while(maxh.size()>0){
            ans+=maxh.top();
            maxh.pop();
        }
        return ans;
    }
};