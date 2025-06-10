class Solution {
public:
    int maxDifference(string s) {
        map<char, int> f;
        for (char c : s) {
            f[c]++;
        }
    
        
        vector<int> evenfreq;
        vector<int> oddfreq;
        for (auto& pair : f) {
            if (pair.second % 2 == 0) {
                evenfreq.push_back(pair.second);
            } else {
                oddfreq.push_back(pair.second);
            }
        }
    
        
        if (evenfreq.empty() || oddfreq.empty()) {
            return 0; 
        }
    
        int maxOdd = *max_element(oddfreq.begin(), oddfreq.end());
        int minEven = *min_element(evenfreq.begin(), evenfreq.end());
    
        return maxOdd - minEven;
    }
};