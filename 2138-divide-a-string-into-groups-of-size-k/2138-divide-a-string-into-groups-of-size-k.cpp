class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>res;
        int n=s.size();
        int t=n/k;
        int r=n%k;
        int i=0;
        while(t--){
            string temp=s.substr(i,k);
            res.push_back(temp);
            i+=k;
        }
        if (r!=0){
            
            t=k-r;
            string temp=s.substr(i);
            while(t--){
                temp+=fill;
            }
            res.push_back(temp);
        }
        return res;
    }
};