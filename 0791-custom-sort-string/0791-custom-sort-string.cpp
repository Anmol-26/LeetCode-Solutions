class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        for(char i:s){
            map1[i]++;
        }
        for(char i:order){
            if(map1.find(i)!=map1.end()){
                int x=map1[i];
                while(x--){
                    ans+=i;
                    map2[i]++;
                }
            }
        }
        for(char i:s){
            if(map2.find(i)==map2.end()){
                ans+=i;
            }
        }
        return ans;
    }
};