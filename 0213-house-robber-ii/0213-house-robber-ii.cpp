class Solution {
    int robbery(vector<int>& nums) {
        int r1=0,r2=0;
        for (int i : nums){
            int r3=max(r1+i,r2);
            r1=r2;
            r2=r3;
        }
        return r2;

    }
public:
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        vector<int> n1,n2;
        for (int i=1;i<nums.size();i++){
            n1.push_back(nums[i]);
        }
        for (int i=0;i<nums.size()-1;i++){
            n2.push_back(nums[i]);
        }
        int a1=robbery(n1);
        int a2=robbery(n2);
        return max(max(nums[0],a1),max(nums[0],a2));
    }
};