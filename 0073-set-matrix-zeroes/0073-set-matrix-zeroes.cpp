class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int r=-1;
        int c=-1;
        vector<pair<int,int>>pr;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if ((i!=r || j!=c) && matrix[i][j]==0){
                    pr.push_back(make_pair(i,j));
                    r=i;
                    c=j;
                }
            }
        }
        for (auto x:pr){
            int i=x.first;
            int j=x.second;
            cout<< i <<" "<<j<<endl;
            for (int a=0;a<m;a++){
                if (matrix[a][j]!=0){
                    matrix[a][j]=0;
                }
            }
            for (int a=0;a<n;a++){
                if (matrix[i][a]!=0){
                    matrix[i][a]=0;
                }
            }
        }
    }
};