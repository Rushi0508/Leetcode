class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // 1 4 7
        // 2 5 8
        // 3 6 9
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j], matrix[j][i]);
                // matrix[i][j]=1;
            }
        }
        int start =0,end=n-1;
        for(int i=0,j=end;i<j;i++,j--){
            for(int k=0;k<n;k++){
                swap(matrix[k][i],matrix[k][j]);
            }
        }
    }
};