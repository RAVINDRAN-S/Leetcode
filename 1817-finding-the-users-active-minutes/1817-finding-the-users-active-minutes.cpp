class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>uam(k,0);
        map<vector<int>,int>r;
        for (auto x :logs){
            r[x]++;
        }
        unordered_map<int,int>t;
        for (auto x : r){
            t[x.first[0]]++;
        }
        for (auto x : t){
            uam[x.second-1]++;
        }
        return uam;
    }
};