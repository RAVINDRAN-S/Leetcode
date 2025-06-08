class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>res;
        for (int i=1;i<=n;i++){
            res.push_back(i);
        }
        int i=0;
        while(res.size()>1){
            int s=res.size();
            int ind=(i+k-1) % s;
            res.erase(res.begin()+ind);
            i=ind; 
        }
        return res[0];
    }
};