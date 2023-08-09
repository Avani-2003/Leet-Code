class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int temp;
        for(int i=0;i<matrix.size()/2;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                temp=matrix[i][i+j];
                matrix[i][i+j]=matrix[n-1-j][i];
                matrix[n-1-j][i]=matrix[n-1][n-1-j];
                matrix[n-1][n-1-j]=matrix[i+j][n-1];
                matrix[i+j][n-1]=temp;
            }
            cout<<endl;
            n--;
        }
      
    }
};
