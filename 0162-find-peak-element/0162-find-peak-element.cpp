class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(mid-1>=l && nums[mid-1]>nums[mid]){
                r=mid-1;
            }
            else if(mid+1<=r && nums[mid+1]>nums[mid]){
                l=mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
};