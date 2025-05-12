class Solution {
    #define ll long long 
    #define pr pair<ll,ll>
    #define mod 1000000007
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<ll>cost(n,LONG_MAX);
        cost[0]=0;
        vector<ll>count(n,0);
        count[0]=1;
        vector<bool>pro(n,false);
        vector<vector<pr>>graph(n);
        for(auto & path :roads){
            graph[path[0]].push_back(make_pair(path[1],path[2]));
            graph[path[1]].push_back(make_pair(path[0],path[2]));
        }
        priority_queue<pr,vector<pr>,greater<pr>>minm;
        minm.push(make_pair(0,0));
        while(!minm.empty()){
            pr cur=minm.top();
            minm.pop();
            ll c=cur.first;
            ll node=cur.second;
            if (pro[node]){
                continue;
            }
            pro[node]=true;
            for (auto & [nbr,w] : graph[node]){
                if (!pro[nbr]){
                    if (c+w==cost[nbr]){
                        count[nbr]=(count[nbr]+count[node])%mod;

                    }else if (c+w < cost[nbr]){
                        cost[nbr]=c+w;
                        count[nbr]=count[node];
                        minm.push(make_pair(c+w,nbr));
                    }
                }
            }
        }
        return count[n-1];
    }
};