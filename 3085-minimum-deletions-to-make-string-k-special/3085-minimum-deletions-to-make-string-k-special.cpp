class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char,int>r;
        for (char c : word){
            r[c]++;
        }
        vector<int>res;
     
        for (auto i:r){
            res.push_back(i.second);
        }
        int ans=INT_MAX;
        int n=res.size();
        sort(res.begin(),res.end());
        for (int i=0;i<n;i++){
            int c=0;
            for (int j=0;j<i;j++){
                c+=res[j];
            }
            for (int j=i;j<n;j++){
                if (res[j] > res[i] + k){
                    c+=res[j]-res[i]-k;
                }
            }
            if (c<ans){
                ans=c;
            }
        }
        return ans;
    }
};