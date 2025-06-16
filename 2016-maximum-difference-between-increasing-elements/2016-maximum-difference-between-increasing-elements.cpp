class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxm=-1;
        int n=nums.size();
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (nums[i]<nums[j]){
                    maxm=max(maxm,nums[j]-nums[i]);
                }
            }
        }
        return maxm;
    }
};