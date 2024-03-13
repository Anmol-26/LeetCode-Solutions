class Solution {
public:
    int pivotInteger(int n) {
        int prefix_sum=0;
        int count=0;
        for(int i=1;i<=n;i++){
            prefix_sum+=i;
        }
        cout<<prefix_sum;
        for(int i=n;i>=1;i--){
            count+=i;
            if(prefix_sum==count){
                return i;
            }
            prefix_sum-=i;
        }
        return -1;
    }
};