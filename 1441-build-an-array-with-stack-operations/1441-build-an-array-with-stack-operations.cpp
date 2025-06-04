class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        unordered_map<int,int>r;
        for (int i : target){
            r[i]++;
        }
        int maxm=*max_element(target.begin(),target.end());
        vector<string>res;
        for (int i=1;i<=maxm;i++){
            res.push_back("Push");
            if (r.find(i)==r.end()){
                res.push_back("Pop");
            }
        }
        return res;
    }
};