class Solution {
public:
    int maxConsecutiveAnswers(string a, int k) {
        int l=0,t=0,f=0,ans=0;
        for (int r=0;r<a.size();r++){
            if (a[r]=='T') t++;
            else f++;
            if ((r-l+1)-max(t,f)<=k)
                ans= max(ans,r-l+1);
            else
                while((r-l+1)-max(t,f)>k){
                    if (a[l]=='T') t--;
                    else f--;
                    l++;
                }
        }
        return ans;
    }
};