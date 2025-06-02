class Solution {
public:
    int candy(vector<int>& rat) {
        int n=rat.size();
        vector<int>res(n,1);
        for (int i=1;i<n;i++){
            if (rat[i-1] < rat[i]){
                res[i]=res[i-1]+1;
            }
        }
        for (int i=n-2;i>=0;i--){
            if (rat[i] > rat[i+1]){
                res[i]=max(res[i],res[i+1]+1);
            }
        }
        int sum=0;
        for ( int i: res){
            sum+=i;
        }
        return sum;
    }
};