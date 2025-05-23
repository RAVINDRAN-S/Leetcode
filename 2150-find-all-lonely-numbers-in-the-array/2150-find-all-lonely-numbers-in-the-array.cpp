class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>r;
        for ( int i : nums) r[i]++;
        vector<int>res;
        for (int i : nums){
            if (r[i]==1 && r.find(i-1)==r.end() && r.find(i+1)==r.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};