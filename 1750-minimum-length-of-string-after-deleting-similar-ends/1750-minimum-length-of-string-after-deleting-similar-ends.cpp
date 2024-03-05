class Solution {
public:
    int minimumLength(string& s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        for(;i<j && s[i]==s[j]; i++,j--){
            while(s[i]==s[i+1] && i+1<j){
                i++;
            } 
            while(s[j]==s[j-1] && i<j-1){
                j--;
            } 
        }
        return j-i+1;    
    }
};