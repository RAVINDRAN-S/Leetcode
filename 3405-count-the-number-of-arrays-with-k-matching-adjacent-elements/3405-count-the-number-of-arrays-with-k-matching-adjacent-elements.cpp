class Solution {
    using ll=long long;
    vector<int> invf,fact;
    int mod=1e9+7;
public:
    void factorial(int n){
        fact=vector<int>(n+1);
        fact[0]=1;
        for (int i=1;i<=n;i++){
            fact[i]=(1ll * i * fact[i-1])% mod;
        }

    }
    int exp(ll x, ll y){
        ll res=1;
        while(y){
            if (y&1){
                res=(res*x)% mod;
            }
            x=(x*x)% mod;
            y/=2;
        }
        return res;
    }
    int mmi(int a){
        return exp(a,mod-2);
    }
    void inverse(int n){
        invf=vector<int>(n+1);
        invf[n]=mmi(fact[n]);
        for (int i=n;i>0;i--){
            invf[i-1]=(1ll * invf[i] * i)% mod;
        }
    }
    
    int countGoodArrays(int n, int m, int k) {
        factorial(n);
        inverse(n);
        int run=((1ll * fact[n-1] * invf[n-k-1])% mod * invf[k])% mod;
        int ass=(1ll * m * exp(m-1,n-k-1))% mod;
        int ans=(run * ass)% mod;
        return ans;
    }
};