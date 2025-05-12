class Solution {
public:
    vector<int> Increasing(const vector<int>& nums) {
        int n = nums.size();
        vector<int> incr(n, 1); 
        
        
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                incr[i] = incr[i + 1] + 1;
            }
        }
        return incr;
    }
    bool subarrays(const vector<int>& incr, int k) {
        int n = incr.size();
        for (int i = 0; i <= n - 2 * k; i++) {
           
            if (incr[i] >= k && incr[i + k] >= k) {
                return true;
            }
        }
        return false;
    }
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> incr = Increasing(nums);
    
        int i = 1, j = n / 2;
        int maxK = 0;
    
        while (i <= j) {
            int mid = i+ (j - i) / 2;
    
            
            if (subarrays(incr, mid)) {
                maxK = mid;  
                i = mid + 1; 
            } else {
                j = mid - 1;  
            }
        }
        return maxK;
    }
};