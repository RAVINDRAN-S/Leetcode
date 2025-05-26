class Solution {
    int dfs(int cur,vector<vector<int>>& adj,vector<vector<int>>& dp,vector<int>& v,string& col){
        if (v[cur]==1){
            return INT_MAX;
        }
        if (v[cur]==0){
            v[cur]=1;
            for (int nbr : adj[cur]){
                int ans=dfs(nbr,adj,dp,v,col);
                if (ans==INT_MAX){
                    return INT_MAX;
                }
                for (int i=0;i<26;i++){
                    dp[i][cur]=max(dp[i][cur],dp[i][nbr]);
                }
                
            }
            dp[col[cur]-'a'][cur]++;
            v[cur]=2;
        }
        return dp[col[cur]-'a'][cur];
    }
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n=colors.size();
        vector<int>v(n,0);
        vector<vector<int>>adj(n);
        vector<vector<int>>dp(26,vector<int>(n));
        int maxm=0;
        for (auto& i : edges){
            adj[i[0]].push_back(i[1]);
        }
        for (int i=0;i<n;i++){
            int ans=dfs(i,adj,dp,v,colors);
            if (ans==INT_MAX){
                return -1;
            }
            maxm=max(maxm,ans);
        }
        return maxm;
    }
};