class Solution {
public:
    bool isValid(string w) {
        int n=w.size();
        int v=0,o=0,c=0,d=0;
        if (n<3){
            return false;
        }
        for (int i=0;i<n;i++){
            if (isdigit(w[i])){
                d++;
            
            } else if (w[i]=='a' || w[i]=='A' || w[i]=='e' || w[i]=='E' || w[i]=='i' || w[i]=='I' || w[i]=='o' || w[i]=='O' || w[i]=='u' || w[i]=='U'){
                v++;
            } else if (isalpha(w[i])){
                c++;
            } else{
                o++;
            }
        }
        if (c>=1 && v>=1 && o==0){
            return true;
        }
        return false;
    }
};