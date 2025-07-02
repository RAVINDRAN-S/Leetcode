class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p,n;
        for (int i : nums){
            if (i>0){
                p.push_back(i);
            } else if (i<0){
                n.push_back(i);
            }
        } 
        vector<int>res;
        for (int i=0;i<p.size();i++){
            res.push_back(p[i]);
            res.push_back(n[i]);
        }
        return res;
    }
};