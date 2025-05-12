class Solution {
    public boolean makeStringsEqual(String s, String target) {
        boolean f=false;
        boolean sec=false;
        for (int i=0;i<s.length();++i){
            if (s.charAt(i)=='1'){
                f=true;
            }
        }
        for (int i=0;i<s.length();i++){
            if (target.charAt(i)=='1'){
                sec=true;
            }
        }
        if (!f && !sec && s!=target){
            return  true;
        } else if (f && sec){
            return true;
        }
        return false;

    }
}