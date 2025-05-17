class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        unordered_map<int,int>r;
        for (int i:nums){
            r[i]++;
        }
        
        
        vector<int>ans;
        for (auto x:r){
            while(x.second--){
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(),ans.end());
        nums=ans;
        
    }
};