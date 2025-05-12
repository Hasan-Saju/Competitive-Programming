#include<bits/stdc++.h>
using namespace std;
class NumMatrix
{
public:
    vector<vector<int>>inp;
    NumMatrix(vector<vector<int>>& matrix)
    {
        inp = matrix;

        for(int i=0; i<matrix.size(); i++)
        {
            for(int j=0; j<matrix[0].size(); j++)
            {
                if(j==0)
                    continue;
                inp[i][j] +=inp[i][j-1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int ans=0;
        for(int it=row1; it<=row2; it++)
        {
            int lastIndVal;
            if(col1==0)
                lastIndVal=0;
            else
                lastIndVal = inp[it][col1-1];
            ans+=inp[it][col2]-lastIndVal;
        }

        return ans;
    }
};
int main()
{
    NumMatrix obj;
    vector<vector<int>>vec = {{3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5}};
    obj.NumMatrix(vec);
}
