class Solution {
    bool isvowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }
    long long  count(string word,int k){
        int n=word.size();
        int con=0;
        int l=0;
        long long c=0;
        unordered_map<char,int>res;
        for (int r=0;r<n;r++){
            if (isvowel(word[r])){
                res[word[r]]++;
            } else{
                con++;
            }
        
            while(res.size()==5 && con>=k){
                c+=n-r;
                if (isvowel(word[l])){
                    res[word[l]]--;
                    if (res[word[l]]==0){
                        res.erase(word[l]);
                    }
                } else{
                    con--;
                }
                l++;
            }
        }
        return c;
    }
public:
    long long countOfSubstrings(string word, int k) {
        
        return count(word,k)-count(word,k+1);
    }
};