class Solution {
public:
    string reverseParentheses(string s) {
        string ans="";
        stack<int>stack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                stack.push(i);
            }
            else if(s[i]==')'){
                int a=stack.top()+1;
                int b=i;
                reverse(s.begin()+a,s.begin()+b);
                stack.pop();
            }
        }
        for(auto i:s){
            if(i!='(' && i!=')'){
                ans+=i;
            }
        }
        return ans;
    }
};