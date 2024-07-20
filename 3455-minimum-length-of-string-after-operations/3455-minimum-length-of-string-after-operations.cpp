class Solution {
public:
    int minimumLength(string s) {
        int res=0;
        unordered_map<char,int>map;
        int i=0;
        while(i<s.size()){
            map[s[i]]+=1;
            if(map[s[i]]==3){
                map[s[i]]=1;
            }
            i++;
        }
        for(auto i:map){
            res+=i.second;
        }
        return res;
    }
};