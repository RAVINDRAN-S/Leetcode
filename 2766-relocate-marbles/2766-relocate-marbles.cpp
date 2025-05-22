class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& m, vector<int>& t) {
        unordered_map<int,int>r;
        for (int i:nums){
            r[i]=i;
        }
        for (int i=0;i<m.size();i++){
            r.erase(m[i]);
            r[t[i]]=t[i];
        }
        vector<int>res;
        for (auto x : r){
            res.push_back(x.second);
        }
        sort(res.begin(),res.end());
        return res;
    }
};