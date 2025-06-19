class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        int grp=1;
        sort(nums.begin(),nums.end());
        int temp=nums[0];
        for (int i=1;i<n;i++){

            if (nums[i]-temp>k){
                grp++;
                temp=nums[i];
            }
        }
        return grp;
    }
};