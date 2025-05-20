class Solution {
public:
    
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& q) {
        int nq=q.size();
        int n=nums.size();
        vector<int>arr(n+1,0);
        for (auto& x:q){
            int i=x[0];
            int j=x[1];
            arr[i]-=1;
            arr[j+1]+=1;
        }
        for (int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        for (int a=0;a<n;a++){
            if(arr[a]+nums[a]>0){
                return false;
            }
        }
        return true;
    }
};