#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int>ans;
        int left = 0, top = 0, right = matrix[0].size(), bottom = matrix.size();

        while(left<right && top<bottom)
        {
            for(int i=left; i<right; i++)
                ans.push_back(matrix[top][i]);
            top += 1;

            for(int i=top; i<bottom; i++)
                ans.push_back(matrix[i][right-1]);
            right -=1;

             if( !(left<right and top<bottom) )
                break;

            for(int i=right; i>left ; i--)
                ans.push_back(matrix[bottom-1][i-1]);
            bottom-=1;

            for(int i=bottom; i>top; i--)
                ans.push_back(matrix[i-1][left]);
            left+=1;
        }

        return ans;

    }
};

int main()
{
    Solution obj;
    vector<vector<int> >vec = {{1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12}
    };
    obj.spiralOrder(vec);
}

