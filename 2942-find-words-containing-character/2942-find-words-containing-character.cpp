class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>r;
        for(int i=0;i<words.size();i++){
            for(char ch:words[i]){
                if (ch==x){
                    r.push_back(i);
                    break;
                }
            }
        }
        return r;
    }
};