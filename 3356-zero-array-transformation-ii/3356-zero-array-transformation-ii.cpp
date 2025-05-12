class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>res(n+1,0);
        int s=0,k=0;
        for (int i=0;i<n;++i){
            while(s+res[i]<nums[i]){
                k++;
                if (k-1 >=queries.size()){
                    return -1;
                }
                int l=queries[k-1][0];
                int r=queries[k-1][1];
                int val=queries[k-1][2];
                if (r<i){
                    continue;
                }
                res[max(l,i)]+=val;
                res[r+1]-=val;
            }
            s+=res[i];
        }
        return k;
    }
};