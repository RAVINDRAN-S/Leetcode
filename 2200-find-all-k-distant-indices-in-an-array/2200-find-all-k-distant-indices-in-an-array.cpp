class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>arr,ans;
        int n=nums.size();
        for (int i=0;i<n;i++){
            if (nums[i]==key){
                arr.push_back(i);
            }
        }
        
        
        for (int a=0;a<n;a++){
            bool q=false;
            for (auto m:arr){
                if (abs(a-m)<=k){
                    q=true;
                    break;
                }
            }
            if (q==true)
                ans.push_back(a);
            
        }
        
        return ans;
    }
};