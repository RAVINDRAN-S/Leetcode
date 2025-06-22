class Solution {
    public String[] divideString(String s, int k, char fill) {
        int n=s.length();
        int t=n/k;
        ArrayList<String> str = new ArrayList<>();

        int r=n%k;
        int i=0;
        while(t!=0){
            String temp=s.substring(i,i+k);
            str.add(temp);
            i+=k;
            t--;
        }
        if (r!=0){
            
            t=k-r;
            String temp=s.substring(i);
            while(t!=0){
                temp+=fill;
                t--;
            }
            str.add(temp);
        }
        String[] res=str.toArray(new String[0]);
        return res;
    }
}