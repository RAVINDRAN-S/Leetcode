class Solution {
public:
    int reverse(int x) {
        int max_int = 2147483647, min_int = -2147483648;
        int s=0;
        
       
        while (x){
            int last=x%10;
            x/=10;
            if (s > max_int / 10 || (s == max_int / 10 && last > 7)){
                return 0;
            }
            if (s < min_int / 10 || (s == min_int / 10 && last < -8)){
                return 0;
            } 
            s=((s*10)+last);
            
        }
        
        return s;
    }
};