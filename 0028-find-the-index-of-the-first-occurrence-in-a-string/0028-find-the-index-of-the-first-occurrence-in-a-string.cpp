class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()){
            return -1;
        }
        int ans=-1;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                int j=0;
                int k=i;
                ans=i;
                while(k<haystack.size() && j<needle.size()){
                    if(haystack[k]==needle[j]){
                        j++;
                        k++;
                    }
                    else{
                        ans=-1;
                        break;
                    }
                }
                if(k==haystack.size() && j<needle.size()){
                    ans=-1;
                }
            }
            if(ans!=-1){
                break;
            }
        }
        return ans;
    }
};