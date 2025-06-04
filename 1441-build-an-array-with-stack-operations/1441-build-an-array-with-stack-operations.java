class Solution {
    public List<String> buildArray(int[] target, int n) {
        List<Integer> r=new ArrayList<>();
        for (int i : target){
            r.add(i);
        }
        int maxm=Collections.max(r);
        List<String>res=new ArrayList<>();
        for (int i=1;i<=maxm;i++){
            res.add("Push");
            if (!r.contains(i)){
                res.add("Pop");
            }
        }
        return res;
    }
}