class Solution {

public:
    #include <numeric>
    


    long long maxScore(vector<int>& nums) {
    
        int n = nums.size();
        if (n == 1) return (long long) nums[0] * nums[0];

       
        int fullGCD = nums[0];
        long long fullLCM = nums[0];
        for (int i = 1; i < n; ++i) {
            fullGCD = gcd(fullGCD, nums[i]);
            fullLCM = lcm(fullLCM, nums[i]);
        }

        long long maxScore = (long long) fullGCD * fullLCM;

        
        for (int i = 0; i < n; ++i) {
            int currentGCD = -1;
            long long currentLCM = 1;

            for (int j = 0; j < n; ++j) {
                if (j == i) continue;

                if (currentGCD == -1) currentGCD = nums[j];
                else currentGCD = gcd(currentGCD, nums[j]);

                currentLCM = lcm(currentLCM, nums[j]);
            }

            maxScore = max(maxScore, (long long) currentGCD * currentLCM);
        }

        return maxScore;

    }
};