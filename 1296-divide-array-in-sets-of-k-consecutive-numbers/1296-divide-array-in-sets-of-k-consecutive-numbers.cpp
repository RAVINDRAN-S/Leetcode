class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if (n % k!=0){
            return false;
        }
        map<int,int>r;
        for (int i : nums){
            r[i]++;
        }
        for (auto x : r){
            if (r[x.first]>0)
                for (int i=k-1;i>=0;i--){
                    if ((r[x.first+i]-=r[x.first])<0){
                        return false;
                    }
                }
        }
        return true;
    }
};