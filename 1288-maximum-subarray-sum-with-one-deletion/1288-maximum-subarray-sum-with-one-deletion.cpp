class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int a=0;
        int b=0;
        int ans=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>ans){
                ans=arr[i];
            }
        }
        if(ans<0){
            return ans;
        }
        for(auto i: arr){
            if(i>=0){
                a+=i;
                b+=i;
            }
            else{
                a=max(b,a+i);
                b=max(b+i,0);
            }
            ans=max(ans,a);
            ans=max(ans,b);
        }
        return ans;
    }
};