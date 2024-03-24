class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>map;
        for(auto i:nums){
            map[i]++;
        }
        for(auto i:map){
            if(i.second>1){
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};