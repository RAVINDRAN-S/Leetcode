class Solution {
    private int robbery(int[] nums) {
        int r1=0,r2=0;
        for (int i : nums){
            int r3=Math.max(r1+i,r2);
            r1=r2;
            r2=r3;
        }
        return r2;
    }
    public int rob(int[] nums) {
        int n=nums.length;
        if (n==1) return nums[0];
        int[] n1=new int[n-1];
        int[] n2=new int[n-1];
        for (int i=1;i<n;i++){
            n1[i-1]=nums[i];
        }
        for (int i=0;i<n-1;i++){
            n2[i]=nums[i];
        }
        int a1=robbery(n1);
        int a2=robbery(n2);
        return Math.max(Math.max(nums[0],a1),Math.max(nums[0],a2));
    }
}