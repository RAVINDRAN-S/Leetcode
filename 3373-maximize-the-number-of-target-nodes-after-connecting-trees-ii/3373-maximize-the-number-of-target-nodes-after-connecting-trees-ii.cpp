class Solution {
    #define pr pair<int,int>
    int bfs(int st, vector<vector<int>>& adj, vector<bool>* v=nullptr){
        queue<pr>q;
        q.push(make_pair(st,-1));
        int lvl=0;
        int c=0;
        while(!q.empty()){
            
            int s=q.size();
            
            if (lvl%2==0){
                c+=s;
            }
            while(s--){
                auto x = q.front();
                int u=x.first;
                int par=x.second;
                q.pop();
                if (v && lvl%2==0){
                    (*v)[u]=true;
                }
                for (int v : adj.at(u)){
                    if (v==par) continue;
                    q.push(make_pair(v,u));
                }
            }
            lvl++;
        }
        return c;
    }
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int m=edges1.size()+1;
        int n=edges2.size()+1;
        vector<vector<int>>adj1(m+1) , adj2(n+1);
        for (auto i : edges1){
            adj1[i[0]].push_back(i[1]);
            adj1[i[1]].push_back(i[0]);
        }
        for (auto i : edges2){
            adj2[i[0]].push_back(i[1]);
            adj2[i[1]].push_back(i[0]);
        }
        int ec2=bfs(0,adj2);
        int oc2=n-ec2;
        int b2=max(ec2,oc2);
        vector<bool> v(m,false);
        int ec1=bfs(0,adj1,&v);
        vector<int>ans(m);
        for (int i=0;i<m;i++){
            if (v[i]){
                ans[i]=ec1+b2;
            } else{
                ans[i]=(m-ec1)+b2;
            }
        }
        return ans;
    }
};