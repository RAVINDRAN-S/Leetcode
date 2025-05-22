class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>>uq;
        priority_queue<int>aq;
        sort(queries.begin(),queries.end());
        int t=0;
        int j=0;
        int c=queries.size();
        for (int i=0;i<n;i++){
            while(j<c && queries[j][0]==i){
                aq.push(queries[j][1]);
                j++;
            }
            nums[i]-=uq.size();
            while(nums[i]>0 && !aq.empty() && aq.top()>=i){
                uq.push(aq.top());
                aq.pop();
                nums[i]--;
                t++;
            }
            if (nums[i]>0) {
                return -1;
            }
            while(!uq.empty() && uq.top()==i){
                uq.pop();
            }
        }
        return c-t;
    }
};