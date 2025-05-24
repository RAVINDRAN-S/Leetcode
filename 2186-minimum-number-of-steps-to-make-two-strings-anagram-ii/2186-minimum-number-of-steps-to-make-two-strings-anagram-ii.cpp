class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>freq(26,0);
        for (char ch : s){
            freq[ch-'a']++;
        }
        for (char ch : t){
            freq[ch-'a']--;
        }
        int c=0;
        for (int i=0;i<26;i++){
            c+=abs(freq[i]);
        }
        return c;
    }
};