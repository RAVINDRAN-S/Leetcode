class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int sum=0;
        int mod=1e9+7;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,h=n-1;
        vector<int>pr(n,1);
        for (int i=1;i<n;i++){
            pr[i]=(pr[i-1]*2)%mod;
        }
        while(l<=h){
            if (nums[l]+nums[h]<=target){
                sum=(sum+pr[h-l])%mod;
                l++;
            } else{
                h--;
            }
        }
        return sum;
    }
};