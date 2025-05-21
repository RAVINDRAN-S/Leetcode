class Solution {
    public void setZeroes(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        int r = -1;
        int c = -1;
        List<int[]> pr = new ArrayList<>();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if ((i != r || j != c) && matrix[i][j] == 0) {
                    pr.add(new int[]{i, j});
                    r = i;
                    c = j;
                }
            }
        }

        for (int[] x : pr) {
            int i = x[0];
            int j = x[1];
            System.out.println(i + " " + j);
            for (int a = 0; a < m; a++) {
                if (matrix[a][j] != 0) {
                    matrix[a][j] = 0;
                }
            }
            for (int a = 0; a < n; a++) {
                if (matrix[i][a] != 0) {
                    matrix[i][a] = 0;
                }
            }
        }
    }
}