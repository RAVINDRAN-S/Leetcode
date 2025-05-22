class Solution {
    public int[][] onesMinusZeros(int[][] grid) {
        int m = grid.length, n = grid[0].length;
        int[] rowOnes = new int[m], colOnes = new int[n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == 1) {
                    rowOnes[i]++;
                    colOnes[j]++;
                }
        int[][] res = new int[m][n];
        for (int i = 0; i < m; i++) {
            int rowTerm = 2 * rowOnes[i] - n;
            for (int j = 0; j < n; j++)
                res[i][j] = rowTerm + 2 * colOnes[j] - m;
        }
        return res;
    }
}
