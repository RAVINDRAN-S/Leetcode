class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int mod = 1e9+7;
        unordered_map<int,int>c1;
        unordered_map<int,int>c2;
        c1.reserve(nums.size()*2);
        c2.reserve(nums.size()*2);
        for (int i : nums){
            c1[i]++;

        }
        int ans=0;
        for (int i : nums){
            int t=i*2;
            int lc = c2[t];
            c2[i]++;
            int rc = c1[t]-c2[t]; 
            ans = (ans + (lc*1LL * rc %mod))%mod;
        }
        return ans;
    }
};