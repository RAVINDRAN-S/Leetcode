class Solution {
public:
    string clearStars(string s) {
        int n=s.size();
        vector<stack<int>>res(26);
        for (int i=0;i<n;i++){
            if (s[i]!='*'){
                res[s[i]-'a'].push(i);
            } else {
                for (int j=0;j<26;j++){
                    if (!res[j].empty()){
                        s[res[j].top()]='*';
                        res[j].pop();
                        break;
                    }
                }
            }
        }
        string ans;
        for (int i=0;i<n;i++){
            if (s[i]!='*'){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};