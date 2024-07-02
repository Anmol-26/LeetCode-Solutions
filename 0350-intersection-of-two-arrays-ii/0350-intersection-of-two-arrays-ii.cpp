class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>map1;
        unordered_map<int,int>map2;
        for(auto i:nums1){
            map1[i]++;
        }
        for(auto i:nums2){
            map2[i]++;
        }
        for(auto i:nums1){
            if(map2[i]-->0){
                ans.push_back(i);
            }       
        }
        return ans;
    }
};