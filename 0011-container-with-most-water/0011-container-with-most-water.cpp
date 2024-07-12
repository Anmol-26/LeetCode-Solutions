class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int i=0;
        int j=height.size()-1;
        while(i!=j){
            int area=(j-i)*min(height[i],height[j]);
            ans=max(ans,area);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};