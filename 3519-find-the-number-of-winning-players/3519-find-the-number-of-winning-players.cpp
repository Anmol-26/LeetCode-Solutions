class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        set<int>s;
        map<pair<int,int>,int>map;
        for(int i=0;i<pick.size();i++){
            map[{pick[i][0],pick[i][1]}]++;
        }
        for(auto i:map){
            if(i.first.first==0){
                s.insert(i.first.first);
            }
            else if(i.first.first==1 && i.second>=2){
                s.insert(i.first.first);
            }
            else if(i.first.first<=i.second-1){
                s.insert(i.first.first);
            }
        }
        return s.size();
    }
};