class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=0;
        ans+=numBottles;
        while(numBottles>=numExchange){
            numBottles-=numExchange;
            ans+=1;
            numBottles+=1;
        }
        return ans;
    }
};