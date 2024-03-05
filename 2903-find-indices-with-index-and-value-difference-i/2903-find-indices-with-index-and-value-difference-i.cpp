class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>ans;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(flag){
                break;
            }
            for(int j=i+indexDifference;j<nums.size();j++){
                if(abs(nums[i]-nums[j])>=valueDifference){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag=true;
                    break;
                }
            }
        }
        if(!flag){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};