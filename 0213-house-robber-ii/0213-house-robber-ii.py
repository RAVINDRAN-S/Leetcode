class Solution(object):
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums)==1:
            return nums[0]
        return max(nums[0],self.rob1(nums[1:]),self.rob1(nums[:-1]))
    def rob1(self,nums):
        r1,r2=0,0
        for i in nums:
            r3=max(r1+i,r2)
            r1=r2
            r2=r3
        return r2

