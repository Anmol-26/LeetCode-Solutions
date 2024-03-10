class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>ans;
        string word;
        unordered_set<string>dict(wordDict.begin(),wordDict.end());
        traverse(s,0,word,ans,dict);
        return ans;
    }
private:
    void traverse(const string& s, int i, string word,vector<string>& ans,unordered_set<string>& dict) {
        if(i==s.size()){
            ans.push_back(word);  
        } 
        else{
            for(int j=i;j<s.size();j++){
                string st=s.substr(i,j-i+1);
                if(dict.find(st)!=dict.end()){
                    if(word.size()>0){
                        word.push_back(' ');
                    }
                    word=word+st;
                    traverse(s,j+1,word,ans,dict);
                    for(int k =0;k<st.size();k++){
                        word.pop_back();
                    }
                    if(word.size()>0){
                        word.pop_back();
                    } 
                }
            }
        }
    }
};