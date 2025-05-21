class Solution {
    bool check(vector<int>& nums, int target){
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
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int>r;
        for (int i=0;i<nums.size();i++){
            r[nums[i]]=i;
        }
        sort(nums.begin(),nums.end());
        if (check(nums,target)){
            return r[target];
        }
        return -1;
    }
};