class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(target==nums[mid]){
                return true;
            } else if (target>nums[mid]){
                l=mid+1;
            } else if (target < nums[mid]){
                h=mid-1;
            } 
        }
        return false;
    }
};