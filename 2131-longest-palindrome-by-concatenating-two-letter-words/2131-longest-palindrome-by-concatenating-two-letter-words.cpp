class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>r;
        for (string s:words){
            r[s]++;
        }
        int c=0,a=0;
        for (auto& x:r){
            string s=x.first;
            reverse(s.begin(),s.end());
            if (x.first==s){
                c+=(x.second/2)*4;
                if (x.second%2) a=1;
            } else {
                if (x.first<s && r.count(s)){
                    c+=min(x.second,r[s])*4;
                }
            }
        }
        return c+a*2;
    }
};