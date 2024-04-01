class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag=false;
        int ans=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && flag==true){
                break;
            }
            else if (s[i]!=' '){
                ans++;
                flag=true;
            }
        }
        return ans;
    }
};