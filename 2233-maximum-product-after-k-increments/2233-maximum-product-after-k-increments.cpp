class Solution {
    const int mod=1e9+7;
public:
    int maximumProduct(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int>,greater<int>>pq;
        for (int i:nums){
            pq.push(i);
        }
        while(k--){
            int t=pq.top()+1;
            pq.pop();
            pq.push(t);
        }
        long int pr=1;
        while(!pq.empty()){
            pr=(pr*pq.top())%mod;
            
            pq.pop();
        }
        return pr;
    }
};