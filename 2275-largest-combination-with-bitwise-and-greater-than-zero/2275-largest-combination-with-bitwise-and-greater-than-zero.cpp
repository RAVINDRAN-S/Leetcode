class Solution {
public:
    int largestCombination(vector<int>& can) {
        int ans=0;
        for (int i=0;i<24;i++){
            int c=0;
            for (int n:can){
                if (n & (1<<i)){
                    c++;
                }
            }
            ans=max(ans,c);
        }
        return ans;
    }
};