#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int>ans;
        int l = 0, t = 0, i = 0, j = 0;

        int d=matrix.size();
        int r=matrix[0].size();
        cout<<"here\n";

        cout<<l<<" "<<r<<" "<<t<<" "<<d<<"\n";
        while(t<=d and l<=r)
        {
            for(int i=l,j=t; j<r; j++)
            {
                cout<<i<<" "<<j<<"1\n";
                ans.push_back(matrix[i][j]);
            }
            t += 1;
            for(int i=r-1,j=t; j<d; j++)
            {
                cout<<j<<" "<<i<<"2\n";
                ans.push_back(matrix[j][i]);
            }
             d -=1;

             if(r<l and d<t)
                break;

            for(int i=d,j=r-2; j>=l; j--)
            {
                cout<<i<<" "<<j<<"3\n";
                ans.push_back(matrix[i][j]);
            }

            r-=1;

            for(int i=d-1,j=l; i>=t; i--)
            {
                cout<<i<<" "<<j<<"4\n";
                ans.push_back(matrix[i][j]);
            }
            l+=1;
            cout<<l<<" "<<r<<" "<<t<<" "<<d<<"\n";
        }
        cout<<"shesh\n";

        for(auto x: ans)
        {
            cout<<x<<" ";
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

