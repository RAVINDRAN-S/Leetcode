class Solution {
public:
    int integer(string s){
        int ans=0;
        for (int i=0;i<s.size();i++){
            ans=ans*10+(s[i]-'0');
        }
        return ans;
    }
    int compareVersion(string vn1, string vn2) {
        int i=0,j=0;
        int n1=vn1.size(),n2=vn2.size();
        while(i<n1 || j<n2){
            int num1=0,num2=0;
            while (i<n1 && vn1[i]!='.'){
                num1=num1*10+(vn1[i]-'0');
                i++;
            }
            i++;
            while(j<n2 && vn2[j]!='.'){
                num2=num2*10+(vn2[j]-'0');
                j++;
            }
            j++;
            if (num1>num2){
                return 1;
            } else if(num1<num2){
                return -1;
            }
        }
        return 0;





        
    }
};