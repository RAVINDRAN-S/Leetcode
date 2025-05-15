class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        int t=groups[0];
        int n=words.size();
        ans.push_back(words[0]);
        for (int i=1;i<n;i++){
            if (groups[i]!=t){
                t=groups[i];
                ans.push_back(words[i]);
            } else{
                continue;
            }
        }
        return ans;
    }
};