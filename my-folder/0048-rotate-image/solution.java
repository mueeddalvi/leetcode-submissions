class Solution {
    public void rotate(int[][] matrix) {
        int n=matrix.length;

        //TRANSPOSE ARRAY
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                    int t1=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=t1;
            }
        }
        //REVERSE ARRAY
        int i;
        int j;
        int k;
        for(i=0;i<n;i++){
            for(k=0,j=n-1;k<j;k++,j--){
                int t=matrix[i][k];
                matrix[i][k]=matrix[i][j];
                matrix[i][j]=t;
            }
        }
    }
}
