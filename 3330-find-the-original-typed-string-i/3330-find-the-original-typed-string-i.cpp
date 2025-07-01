class Solution {
public:
    int possibleStringCount(string word) {
        int c=1;
        for (int i=0;i<word.size()-1;i++){
            if (word[i]==word[i+1]){
                c++;
            }
        }
        return c;
    }
};