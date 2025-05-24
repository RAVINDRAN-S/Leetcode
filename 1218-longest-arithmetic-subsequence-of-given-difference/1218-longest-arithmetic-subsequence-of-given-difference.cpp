class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        unordered_map<int,int>r;
        int maxm=1;
        for (int i=0;i<arr.size();i++){
            int n=arr[i];
            if (r.find(n-d)!=r.end()){
                r[n]=r[n-d]+1;
            } else {
                r[n]=1;
                
            }
            maxm=max(maxm,r[n]);
        }
        return maxm;
    }
};