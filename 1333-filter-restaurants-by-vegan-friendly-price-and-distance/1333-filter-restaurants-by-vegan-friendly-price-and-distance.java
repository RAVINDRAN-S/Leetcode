class Solution {
    public List<Integer> filterRestaurants(int[][] rest, int v, int maxP, int maxD) {
        List<Integer>res=new ArrayList<>();
        Arrays.sort(rest, (a, b) -> {
            if (b[1]==a[1]){
                return Integer.compare(b[0], a[0]);
            }
            return Integer.compare(b[1], a[1]);
        });
        for (int[] x : rest){
            if (v==1 && x[2]==0){
                continue;
            } else if(x[3]>maxP || x[4]>maxD){
                continue;
            }
            res.add(x[0]);
        }
        
        return res;
    }
}