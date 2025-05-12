class Solution {
    bool isPalindrome(const string &str) {
        int l= 0, r= str.length() - 1;
        while (l < r) {
            if (str[l] != str[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

public:
    int longestPalindrome(string s, string t) {
         int maxm = 0;
        int s_len = s.size(), t_len = t.size();
        
       
        for (int i = 0; i <= s_len; i++) {
            for (int j = i; j <= s_len; j++) {
                string sub_s = s.substr(i, j - i);
                
              
                for (int k = 0; k <= t_len; k++) {
                    for (int l = k; l <= t_len; l++) {
                        string sub_t = t.substr(k, l - k);
                        string c = sub_s + sub_t;
                        
                        if (isPalindrome(c)) {
                            maxm = max(maxm, (int)c.size());
                        }
                    }
                }
            }
        }
        return maxm;
    }
};