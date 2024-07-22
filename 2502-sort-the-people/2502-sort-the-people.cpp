class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>ans;
        priority_queue<pair<int,string>>pq;
        for(int i=0;i<names.size();i++){
            pq.push({heights[i],names[i]});
        }
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};