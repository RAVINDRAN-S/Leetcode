class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n=word.size();
        vector<int> ans(n,0);
        
        long long rem=0;
        for (int i=0;i<n;i++){
           
            int t=word[i]-'0';
            long long d=(rem*10)+t;
            long long c=d%m;
            ans[i]=(c==0)? 1 : 0;
            rem=c;
            
        }
        return ans;
    }
};