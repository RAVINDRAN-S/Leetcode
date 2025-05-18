class Solution {
    int MOD = 1e9+7;
    int states[1000+2][1023];
    int count(int& m,int& n,int r,int c,int cur,int prev){
        if(c==n) {
            return 1;
        }
        if(r==m){
            return count(m,n,0,c+1,0,cur);
        }
        if(r==0 and states[c][prev]!=-1) {
            return states[c][prev];
        }
        int up = 0;
        if(r>0) up = cur & 3;

        int left = (prev >> ((m-r-1)*2)) & 3;

       
        int ways = 0;
        for(int color=1;color<=3;++color){
            if(color!=up and color!=left)
                ways = (ways + count(m,n,r+1,c,(cur<<2) + color,prev))%MOD;
        }
        if(r==0)
            states[c][prev] = ways;
        return ways;
    }
public:
    int colorTheGrid(int m, int n) {
        memset(states,-1,sizeof(states));
        return count(m,n,0,0,0,0);
    }
};