class Solution {
    
public:
    
    int lengthAfterTransformations(string s, int t) {
        int n=s.size();
        long len=0;
        long mod=1e9+7;
        
        vector<long>freq(26);
        for (char ch:s){
            freq[ch-'a']++;
        }
        while(t--){
            vector<long>nfreq(26);
            for (auto ch='z';ch>='a';ch--){
                if (ch=='z'){
                    nfreq[0]=freq[ch-'a'];
                    nfreq[1]=freq[ch-'a'];
                }
                else nfreq[(ch-'a')+1]+=freq[ch-'a'];
                nfreq[ch-'a']%=mod;
            }
            freq=nfreq;
            
        }
        for (int i=0;i<26;i++){
            len+=(freq[i]%mod);
        }
        
        return len%mod;  
    }

};
