class Solution {
public:
    int maxDiff(int num) {
        string str = to_string(num);
        string maxi = "";
        string mini = "";
        char ele =' ', ele2=' ';
        for(int i=0;i<str.length();i++){
            if(str[i]!='9'){
                ele = str[i];
                break;
            }
        }

        for(int i=0;i<str.length();i++){
            if(str[i]!='1' && str[i]!='0'){
                ele2=str[i];
                break;
            }
        }

        for(int i =0;i<str.length();i++){
            if(str[i]==ele) maxi+= '9';
            else maxi += str[i];
        }

        for(int i =0;i<str.length();i++){
            if(str[0]=='1'){
                if(str[i]==ele2) mini+='0';
                else mini += str[i];
            }else{
                if(str[i]==str[0]) mini+= '1';
                else mini += str[i];
            }
        }

        return stoi(maxi) - stoi(mini);
        
    }
};