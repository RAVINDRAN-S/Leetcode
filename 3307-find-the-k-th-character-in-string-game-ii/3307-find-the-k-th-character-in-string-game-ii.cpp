class Solution {
public:
    char kthCharacter(long long k, vector<int>& ops) {
        string s = "a";
        for (int op : ops) {
            string t;
            if (op == 0) t = s;
            else for (char c : s) t += (c == 'z' ? 'a' : c + 1);
            s += t;
        }
        return s[k - 1];
    }
};