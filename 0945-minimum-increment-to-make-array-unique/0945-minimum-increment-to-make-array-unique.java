class Solution {
    public int minIncrementForUnique(int[] nums) {
        Arrays.sort(nums);
        int res=0;
        int n=nums.length;
        for (int i=1;i<n;i++){
            if (nums[i]<=nums[i-1]){
                res+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return res;
    }
}