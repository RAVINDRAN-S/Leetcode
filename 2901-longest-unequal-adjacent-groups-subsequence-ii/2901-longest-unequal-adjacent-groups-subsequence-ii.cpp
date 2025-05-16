class Solution {
    bool hamdiff(string a,string b){
        if (a.size()!=b.size()){
            return false;
        }
        int c=0;
        for (int i=0;i<a.size();i++){
            if (a[i]!=b[i]){
                c++;
            }
        }
        return c==1;
    }
public:
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n=words.size();
        vector<int>dp(n,1);
        vector<int>prev(n,-1);
        int bestLen = 1;
        int bestEnd = 0;
        for (int i=1;i<n;i++){
            int j=i-1;
            while(j>=0){
                if (groups[i] != groups[j] && hamdiff(words[i], words[j])) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        prev[i] = j;
                    }
                }
                j--;
            }
            if (dp[i] > bestLen) {
                bestLen = dp[i];
                bestEnd = i;
            }
        }
        for (int i: dp){
            cout<< i<<" ";
        }
        cout<<endl;
        for (int i: prev){
            cout<< i<<" ";
        }
        cout<<endl;
        
        vector<string>ans;
        int cur = bestEnd;
        while (cur != -1) {
            ans.push_back(words[cur]);
            cur = prev[cur];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};