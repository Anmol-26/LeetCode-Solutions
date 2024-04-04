class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int res=0;
        for(auto i:s){
            if(i=='('){
                ans++;
            }
            else if(i==')'){
                ans--;
            }
            res=max(res,ans);
        }
        return res;
    }
};