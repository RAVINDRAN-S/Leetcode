class Solution {
public:
    vector<string> partitionString(string s) {
        int n = s.size();
        vector<string> seg;
        unordered_set<string> seen; // to track already used substrings
        int i = 0;

        while (i < n) {
            bool f = false;
            string cur;
            for (int j = i; j < n; j++) {
                cur.push_back(s[j]);
                if (seen.count(cur) == 0) {
                    
                    f = true;
                    seg.push_back(cur);
                    seen.insert(cur);
                    i = j + 1;
                    break; 
                }
            }
            if (!f) break;
        }

        return seg;
    }
};