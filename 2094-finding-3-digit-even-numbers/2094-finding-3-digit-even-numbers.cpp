class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>s;
        int n=digits.size();
        for (int i=0;i<n;i++){
            if (digits[i]==0) continue;
            for (int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if (i!=j && j!=k && i!=k && (digits[i]*100+digits[j]*10+digits[k])%2==0){
                        s.insert(digits[i]*100+digits[j]*10+digits[k]);
                    }
                }
            }
        }
        vector<int>ans;
        for (auto i :s){
            ans.push_back(i);
        }
        return ans;
    }
};