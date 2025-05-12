class Solution {
public:
    void is_prime(vector<int>& r){
        int n= r.size()-1;
        
        for (long long int i=2;i<=sqrt(n);i++){
            for (int j=i*2;j<=n;j+=i){
                r[j]=0;
            }
            
        }
        
        
    }
    int countPrimes(int n) {
        vector <int> r(n+1,1);
        is_prime(r);
        int c=0;
        for (int i=2;i<n;i++){
            if (r[i]==1){
                c++;
            }
        }
        
        return c;
        
    }
};