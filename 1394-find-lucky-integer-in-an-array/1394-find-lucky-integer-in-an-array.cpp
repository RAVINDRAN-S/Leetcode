class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxm=-1;
        unordered_map<int,int>r;
        for (int i : arr){
            r[i]++;
        }
        for (auto x:r){
            if (x.first==x.second){
                maxm=max(maxm,x.first);
            }
        }
        return maxm;
    }
};