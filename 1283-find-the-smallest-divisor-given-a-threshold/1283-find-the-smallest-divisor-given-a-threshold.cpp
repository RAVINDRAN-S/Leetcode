class Solution {
    bool check(int t,int n, vector<int>& nums){
        int sum=0;
        for (int i:nums){
            sum+=i/n+1;
        }
        if (sum<=t){
            return true;
        }
        return false;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        while(l<h){
            int mid=l+(h-l)/2;
            if(check(threshold,mid,nums)){
                h=mid;
            }else{
                l=mid+1;
            }

        }
        return l;
    }
};