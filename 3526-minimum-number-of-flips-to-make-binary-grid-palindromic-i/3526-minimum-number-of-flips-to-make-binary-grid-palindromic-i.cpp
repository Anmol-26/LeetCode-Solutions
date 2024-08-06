class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int count=0,count1=0,res=0;
        for(int i=0;i<grid.size();i++){
            int j=grid[0].size()-1,k=0;
            while(k<j){
                if(grid[i][k]==grid[i][j]){
                    j--;k++;
                }
                else{
                    count+=1;
                    j--;k++;
                }
            }
        }
        for(int i=0;i<grid[0].size();i++){
            int j=grid.size()-1,k=0;
            while(k<j){
                if(grid[k][i]==grid[j][i]){
                    j--;k++;
                }
                else{
                    count1+=1;
                    j--;k++;
                }
            }
        }
        res=min(count,count1);
        return res;
    }
};