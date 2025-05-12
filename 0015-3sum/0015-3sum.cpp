class Solution {
#include <vector> 
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set <vector<int>> sol;
        vector <vector<int>> output;
        for (int i=0; i<nums.size();i++){
            
            int j = i + 1;
            int y = nums.size() - 1;
            while (j < y) {
                
                if ( nums[i] + nums[j] + nums[y] == 0) {
                    sol.insert({nums[i], nums[j], nums[y]});
                    j++;
                    y--;
                } else if ( nums[i] + nums[j] + nums[y] < 0) {
                    j++;
                } else {
                    y--;
                }
            }
        }
        for (auto x : sol)
            output.push_back(x);
        return output;
    }
};