class Solution {
    void dfs(int cur,int n, vector<int>& res){
        if (cur>n) return;
        res.push_back(cur);
        for (int i=0;i<=9;i++){
            int nxt=cur*10+i;
            if (nxt<=n){
                dfs(nxt,n,res);
            } else {
                break;
            }
        }
        
    }
public:
    vector<int> lexicalOrder(int n) {
        vector<int>res;
        for (int i=1;i<=9;i++){
            dfs(i,n,res);
        }
        return res;
    }
};