class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> tri;
        for(int i=0;i<n;i++)
        {
            tri.push_back(vector<int>(i+1,1));
            //vector<int>(i+1, 1) creates a new vector<int> with a size of i+1 and initializes all elements to 1.
            // tri.push_back(): It adds the vector as a new row at the end of the tri vector.
            for(int j=1;j<i;j++)
            {
                tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
            }
        }
        return tri;
    }
};
