class Solution {
public:
    int maxCandies(vector<int>& stat, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& cb, vector<int>& init) {
        
        int n=candies.size();
        queue<int>q;
        for (int i : init){
            q.push(i);
        }
        vector<bool>v(n,false);
        int ans=0;
        unordered_set<int>cs;
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            if (stat[cur]==1){
                for (int x : keys[cur]){
                    stat[x]=1;
                }
                ans+=candies[cur];
                v[cur]=true;
                for (int y : cb[cur]){
                    q.push(y);
                }

            }else {
                cs.insert(cur);
            }
        }
        for (int i : cs){
            if (stat[i]==1 && v[i]==false){
                ans+=candies[i];
            }
        }
        return ans;
    }
};