class Solution {
    
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        for (int c=0;c<n;c++){
            int r=0;
            int j=c;
            vector<int>diag;
            while(r<m && j<n){
                diag.push_back(mat[r][j]);
                r++,j++;
            }
            sort(diag.begin(),diag.end());
            r=0,j=c;
            int i=0;
            while(r<m && j<n){
                mat[r][j]=diag[i++];
                r++,j++;
            }
        }
        for (int r=1;r<m;r++){
            int c=0,j=r;
            vector<int>diag;
            while(c<n && j<m){
                diag.push_back(mat[j][c]);
                c++,j++;
            }
            sort(diag.begin(),diag.end());
            c=0,j=r;
            int i=0;
            while(c<n && j<m){
                mat[j][c]=diag[i++];
                j++,c++;
            }
        }
        return mat;
    }
};