class Solution {
public:
    bool check(vector<int>& nums){
        if (nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0]){
            return true;
        }
        return false;
        
    }
    string triangleType(vector<int>& nums) {
        if (nums[0]==nums[1] && nums[1]==nums[2]){
            return "equilateral";
        } if (check(nums)){
            if (nums[0]!=nums[1] && nums[1]!=nums[2] && nums[0]!=nums[2]){
                return "scalene";
            } else if (nums[0]==nums[1]!=nums[2]|| nums[1]==nums[2]!=nums[0]|| nums[0]==nums[2]!=nums[1]){
                return "isosceles";
            }
        }
        return "none";
    }
};