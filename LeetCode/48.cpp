#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0; i<n; i++)
            for(int j=0; j<i; j++)
                swap(matrix[i][j], matrix[j][i]);
        for(int i=0; i<n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};

int main()
{
    Solution obj;
    vector<vector<int> > vec= {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    obj.rotate(vec);
}


