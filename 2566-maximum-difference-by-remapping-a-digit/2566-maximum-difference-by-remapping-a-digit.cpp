class Solution {
public:
    
    int minMaxDifference(int num) {
        string tem=to_string(num);
        char max,min;
        for (int i=0;i<tem.size();i++){
            if (tem[i]!='9'){
                max=tem[i];
                break;
            }
        }
        for(int j=0;j<tem.size();j++){
            if (tem[j]!='0'){
                min=tem[j];
                break;
            }
        }
        string s=tem;
        string b=tem;
        
        for (int a=0;a<s.size();a++){
            
            if (tem[a]==max){
                s[a]='9';
                
            }
            if (tem[a]==min){
                b[a]='0';
            }
        }
        int num1=stoi(s);
        int num2=stoi(b);
        return num1-num2;

    }
};