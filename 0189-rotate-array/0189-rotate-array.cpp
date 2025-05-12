class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>r(n,0);
        for (int i=0;i<n;i++){
            int ind=(i+k)%n;
            r[ind]=nums[i];
        }
        nums=r;
        
    }
};