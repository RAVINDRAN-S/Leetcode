class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        int maxm=0;
        unordered_map<int,int>freq;
        for (int i : nums){
            freq[i]++;
        }
        for (auto& [n,c]:freq){
            if (freq.find(n+1)!=freq.end()){
                int l=c+freq[n+1];
                maxm=max(l,maxm);
            }
            
        }
        return maxm;
    }
};