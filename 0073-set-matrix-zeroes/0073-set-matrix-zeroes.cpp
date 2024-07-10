class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,pair<int,int>>hp;
        int c=-1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    hp.insert({c,{i,j}});
                    c++;
                }
            }
        }
        for(auto i: hp){
            int x=i.second.first;
            int y=matrix[x].size()-1;
            while(y>=0){
                matrix[x][y]=0;
                y--;
            }
            int p=i.second.second;
            int q=matrix.size()-1;
            while(q>=0){
                matrix[q][p]=0;
                q--;
            }
        }
    }
};