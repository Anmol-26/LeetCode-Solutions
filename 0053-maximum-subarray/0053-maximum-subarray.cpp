class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>ans;
        int res=INT_MIN;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            int a=ans[i-1]+nums[i];
            ans.push_back(max(a,nums[i]));
        }
        for(auto i:ans){
            cout<<i;
            if(i>res){
                res=i;
            }
        }
        return res;
    }
};