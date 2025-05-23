class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0,n=nums.size();
        for (int i=1;i<n;i++){
            if (nums[i]<=nums[i-1]){
                res+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return res;
    }
};