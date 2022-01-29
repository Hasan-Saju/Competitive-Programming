#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void print(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }

    }
    void setZeroes(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        bool row=false,col=false;

         print(matrix);
        cout<<"\n";

        for(int i=0;i<m;i++)
            if(matrix[0][i]==0)
                    row=true;

        for(int i=0; i<n; i++)
        {
            if(matrix[i][0]==0)
                    col=true;

            for(int j=0; j<m; j++)
            {

                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        cout<<row<<" "<<col<<"\n";
        print(matrix);

        for(int i=1; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                if(matrix[0][j]==0 or matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                    //cout<<i<<" "<<j<<"\n";
                }
            }
        }

        cout<<"\n temp \n";
        print(matrix);

        if(row)
        {
            for(int j=0;j<m;j++)
                matrix[0][j]=0;
        }
        if(col)
        {
              for(int i=0;i<n;i++)
                matrix[i][0]=0;
        }

        cout<<"\n result \n";
        print(matrix);

    }
};

int main()
{
    Solution obj;
    vector<vector<int> >vec={{1,2,3,4},{5,0,7,8},{0,10,11,12},{13,14,15,0}};
    obj.setZeroes(vec);
}





