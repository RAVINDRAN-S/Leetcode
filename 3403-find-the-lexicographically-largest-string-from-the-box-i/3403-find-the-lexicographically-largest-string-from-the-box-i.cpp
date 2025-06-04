class Solution {
public:
    string answerString(string word, int num) {
        string res;
    
        int n=word.size();
        if (num==1){
            return word;
        }
        for (int i=0;i<n;i++){
            
            res=max(res,word.substr(i,min(n-num+1,n-i)));
        }
        
        return res;
    }
};