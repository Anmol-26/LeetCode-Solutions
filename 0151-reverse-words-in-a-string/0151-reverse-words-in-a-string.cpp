class Solution {
public:
    string reverseWords(string s) {
        stack<string>stack;
        string st="";
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(!st.empty()){
                    stack.push(st);
                    st="";
                }
            } 
            else{
                st+=s[i];
            }
        }
        if(!st.empty()){
            stack.push(st);
        }
        while(stack.size()!=1){
            ans+=stack.top()+" ";
            stack.pop();
        }
        ans+=stack.top();
        return ans;
    }
};