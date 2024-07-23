class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        map<int,vector<int>>res;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            res[i.second].push_back(i.first);
        }
        for(auto i:res){
            sort(i.second.begin(),i.second.end());
            int n=i.second.size();
            for(int j=n-1;j>=0;j--){
                for(int k=0;k<i.first;k++){
                    ans.push_back(i.second[j]);
                }
            }
        }
        return ans;
    }

};