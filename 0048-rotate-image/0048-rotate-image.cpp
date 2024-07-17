class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            int x=0;
            int y=matrix.size()-1;
            while(x<y){
                swap(matrix[i][x],matrix[i][y]);
                x++;
                y--;
            }
        }
    }
};