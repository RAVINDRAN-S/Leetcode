class Solution {
    void countOR(vector<int>& nums,int& c, int ind, int maxm, int cur){
        if (cur==maxm){
            c++;
        }
        for (int i=ind;i<nums.size();i++){
            countOR(nums,c,i+1,maxm,cur | nums[i]);
        }
    }
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxm=0;
        for (int i : nums){
            maxm|=i;
        }
        int c=0;
        countOR(nums,c,0,maxm,0);
        return c;
    }
};