class Solution {
public:
    int countTriples(int n) {
        int c=0;
        for (int i=3;i<=n;i++){
            for (int j=1;j<i;j++){
                int k=(pow(i,2)-pow(j,2));
                k=sqrt(k);
                if (pow(k,2)+pow(j,2)==pow(i,2)){
                    c++;
                }
            }
        }
        return c;
    }
};