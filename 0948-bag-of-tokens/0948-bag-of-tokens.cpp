class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans=0;
        int score=0;
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        while(i<=j){
            if(tokens[i]<=power){
                power-=tokens[i];
                score++;
                ans=max(ans,score);
                i++;
            }
            else{
                if(score>0){
                    score--;
                    power+=tokens[j];
                    j--;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};