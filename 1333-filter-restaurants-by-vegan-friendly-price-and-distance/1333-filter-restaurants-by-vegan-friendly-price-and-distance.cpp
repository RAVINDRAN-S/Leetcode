class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& rest, int v, int maxP, int maxD) {
        sort(rest.begin(),rest.end(), [](auto& x, auto& y){
            if (x[1]==y[1]){
                return x[0]>y[0];
            }
            return x[1]>y[1];
        });
        vector<int>res;
        for (auto x : rest){
            if (v==1 && x[2]==0){
                continue;
            } else if(x[3]>maxP || x[4]>maxD){
                continue;
            }
            res.push_back(x[0]);
        }
        return res;
       
    }
};