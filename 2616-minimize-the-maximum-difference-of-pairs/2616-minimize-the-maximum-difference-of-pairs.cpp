class Solution {
public:
    int countp(vector<int>& nums, int p){
        int c=0,i=0;
        int n=nums.size();
        while(i<n-1){
            if (nums[i+1]-nums[i]<=p){
                c++;
                i++;
            }
            i++;
        }
        return c;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=nums[n-1]-nums[0];
        while(l<r){
            int mid =l+(r-l)/2;
            if (countp(nums,mid)>=p){
                r=mid;
            } else {
                l=mid+1;
            }
        }
        return l;
    }
};