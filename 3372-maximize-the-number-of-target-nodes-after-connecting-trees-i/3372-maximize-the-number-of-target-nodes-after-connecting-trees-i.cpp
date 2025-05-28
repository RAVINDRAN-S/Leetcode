class Solution {
    #define pr pair<int,int>
    int bfs(int st,vector<vector<int>>& adj, int k){
        queue<pr>q;
        q.push(make_pair(st,-1));
        int c=0;
        while(!q.empty() && k>=0){
            int s=q.size();
            c+=s;
            for (int i=0;i<s;i++){
                pr cur=q.front();
                q.pop();
                int u=cur.first;
                int par=cur.second;
                for (int v : adj[u]){
                    if (v != par){
                        q.push(make_pair(v,u));
                    }
                }
            }
            k--;
        }
        return c;

    }
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        int m=edges1.size()+1;
        int n=edges2.size()+1;
        vector<vector<int>>adj1(m),adj2(n);
        for(auto& edge: edges1){
            adj1[edge[0]].push_back(edge[1]);
            adj1[edge[1]].push_back(edge[0]);
        }
        for(auto& edge: edges2){
            adj2[edge[0]].push_back(edge[1]);
            adj2[edge[1]].push_back(edge[0]);
        }
        
        int best=0;
        for(int i=0;i<n;++i){
            int connections = bfs(i,adj2,k-1);
            best = max(best,connections);
        }
        
        
        vector<int> res(m);
        for(int i=0;i<m;++i){
            int connections = bfs(i,adj1,k);
            res[i] = connections + best;
        }
        return res;
    }
};