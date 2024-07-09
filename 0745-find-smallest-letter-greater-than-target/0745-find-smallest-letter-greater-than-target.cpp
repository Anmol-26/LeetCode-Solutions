class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=letters[0];
        for(char i: letters){
            if(i>target){
                ans=i;
                break;
            }
        }
        return ans;
    }
};