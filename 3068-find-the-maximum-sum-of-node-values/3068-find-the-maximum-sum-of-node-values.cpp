class Solution 
{
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) 
    {
       
        long long sum = 0;
        vector<int> gains;

     
        for (int num : nums) 
        {
            int xorVal = num^k;
            int gain = xorVal - num;
            sum += num;
            gains.push_back(gain);
        }

       
        sort(gains.rbegin(), gains.rend());

       
        long long maxGain = 0, currentGain = 0;
        int count = 0;

        for (int g : gains) {
            currentGain += g;
            count++;
        
            if (count % 2 == 0) 
            {
                maxGain = max(maxGain, currentGain);
            }
        }

        
        return sum + maxGain;
    }
};