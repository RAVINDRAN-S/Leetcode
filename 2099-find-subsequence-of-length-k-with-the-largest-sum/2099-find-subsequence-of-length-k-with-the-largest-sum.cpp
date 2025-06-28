class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> r;
        for(int i = 0; i < n; i++)
            r.push_back({nums[i], i});

        unordered_set<int>s;
        sort(rbegin(r), rend(r));

        for(auto [j, i] : r)
        {
            if(!k--) break;
            s.insert(i);
        }

        vector<int>ans;
        for(int i = 0; i < n; i++)
            if(s.count(i)) ans.push_back(nums[i]);

        return ans;
    }
};