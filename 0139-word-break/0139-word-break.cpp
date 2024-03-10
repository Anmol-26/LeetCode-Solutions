class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        vector<int>v1(s.size()+1,INT_MIN);
        return traverse(s,0,dict,v1);
    }
private:
    bool traverse(const string& s, int i,unordered_set<string>& dict,vector<int>& v1) {
        if(v1[i]!=INT_MIN){
            return v1[i];
        } 
        if(i==s.size()){
            return v1[i]=true;
        }
        v1[i]=false;
        for(int j=i;j<s.size();j++){
            string st=s.substr(i,j-i+1);
            if(dict.find(st)!=dict.end()){
                if(traverse(s,j+1,dict,v1)){
                    v1[i]=true;
                    break;
                }
            }
        }
        return v1[i];
    }
};
