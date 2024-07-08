class Solution {
public:
    int findTheWinner(int n, int k) {
        int i=0;
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        while(arr.size()>1){
            int temp=(i+k-1)%arr.size();
            arr.erase(arr.begin()+temp);
            i=temp;
        }
        return arr[0];
    }
};