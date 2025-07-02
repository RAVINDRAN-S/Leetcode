class Solution {
    const int mod=1e9+7;
public:
    int possibleStringCount(string word, int k) {
        vector<int>grp;
        int c=1;
        for (int i=1;i<word.size();i++){
            if (word[i]==word[i-1]) c++;
            else {
                grp.push_back(c);
                c=1;
            }
        }
        grp.push_back(c);
        int n=grp.size();
        long long int t=1;
        for (int i : grp) t=(t*i)%mod;
        if (k<=n) return t;
        vector<int>dp(k,0);
        dp[0]=1;
        for (int i : grp){
            long long sum=0;
            vector<int>ndp(k,0);
            for (int s=0;s<k;s++){
                if (s>0) sum=(sum+dp[s-1])%mod;
                if (s>i) sum= (sum-dp[s-i-1]+mod)%mod;
                ndp[s]=sum;
            }
            dp=ndp;
        }
        long long inv=0;
        for (int s=n;s<k;s++){
            inv=(inv+dp[s])%mod;
        }
        return (t-inv+mod)%mod;
    }
};