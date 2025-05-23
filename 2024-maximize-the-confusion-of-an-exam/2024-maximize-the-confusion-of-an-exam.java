class Solution {
    public int maxConsecutiveAnswers(String a, int k) {
        int l=0;
        int t=0;
        int f=0;
        int ans=0;
        for (int r=0;r<a.length();r++){
            if (a.charAt(r)=='T') t++;
            else f++;
            if ((r-l+1)-Math.max(t,f)<=k)
                ans= Math.max(ans,r-l+1);
            else
                while((r-l+1)-Math.max(t,f)>k){
                    if (a.charAt(l)=='T') t--;
                    else f--;
                    l++;
                }
        }
        return ans;
    }
}