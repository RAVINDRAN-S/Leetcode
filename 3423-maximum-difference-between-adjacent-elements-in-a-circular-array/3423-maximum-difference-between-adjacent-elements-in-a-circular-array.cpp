class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxm=0;
        vector<int>cir=nums;
        for (int i : nums){
            cir.push_back(i);

        }
        for (int i=1;i<cir.size();i++){
            maxm=max(maxm,abs(cir[i]-cir[i-1]));
        }
        return maxm;

    }
};