class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int num=0;
            int j=0;
            if(x==0){                      
                pq.push({mapping[0],i});
                continue;
            }
            while(x>0){
                int k=x%10;
                x=x/10;
                num+=mapping[k]*pow(10,j);
                j++;
            }
            pq.push({num,i});
        }
        while(!pq.empty()){
            pair<int,int>p=pq.top();
            pq.pop();
            ans.push_back(nums[p.second]);
        }
        return ans;
    }
};