#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> result(n, vector<int>(m));

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,2,3},{4,5,6},{7,8,9}};
    obj.transpose(vec);
}

