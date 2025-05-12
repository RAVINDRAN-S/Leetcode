class Solution {
public:
    
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long int sum=0;
        long long int maxm=0;
        unordered_map<int,int>r;
        for (int i=0;i<n;++i){
            sum+=nums[i];
            r[nums[i]]++;
            if (i>=k){
                sum-=nums[i-k];
                r[nums[i-k]]--;
                if (r[nums[i-k]]==0){
                    r.erase(nums[i-k]);
                }
            }
            if (i>=(k-1) && r.size()==k){
                maxm=max(maxm,sum);
            }
        }
        return maxm;
           
    }
};