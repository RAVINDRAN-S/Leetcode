class Solution {
public:
    int myAtoi(string s) {
        if (s.size()==0){
            return 0;
        }
        int i=0;
        while(i<s.size()&& s[i]== ' '){
            i++;
        }
        s=s.substr(i);
        int neg=1;
        long ans=0;
        if (s[0]=='-'){
            neg=-1;
        }
        i=(s[0]=='+' || s[0]=='-')?1:0;
        while(i<s.size()){
            if (s[0]==' ' || !isdigit(s[i])){

                break;
            }
            
            ans=ans*10+(s[i]-'0');
            if(neg==-1 && ans*neg<INT_MIN){
                return INT_MIN;
            } if (neg==1 && ans>INT_MAX){
                return INT_MAX;
            }
            i++;
        }
        
        
        
        return ans*neg;
    }
};