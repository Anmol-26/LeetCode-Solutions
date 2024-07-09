class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=letters[0];;
        for(char i: letters){
            if(int(i)>int(target)){
                ans=i;
                break;
            }
        }
        return ans;
    }
};