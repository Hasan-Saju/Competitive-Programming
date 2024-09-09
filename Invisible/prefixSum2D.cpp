#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m =6, n = 8;

    vector<vector<int> >vec
    {
        {1, 2, -1, -3, 4, 2, 0, 1},
        {3, -2, 4, 5, -3, -1, 1, 0},
        {0, 1, -3, 1, 3, 2, 4, -2},
        {-1, 3, 4, 7, -2, 0, 1, 3},
        {3, 4, 2, 4, -7, -1, 3, 0},
        {-5, 4, 1, -2, 3, -4, 3, 3}
    };

    vector<vector<int> >prefix(m+1, vector<int>(n+1, 0));

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<i<<" "<<j<<"\n";
            prefix[i][j] = vec[i-1][j-1] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    //for row
    int ans = INT_MAX;
    for(int i=1; i<=m; i++)
    {
       int upper = prefix[i][n];
       int lower = prefix[m][n] - upper;

       int small = min(upper, lower);
       ans = min(ans, small);
    }

    //for col
    for(int j=1; i<=n; i++)
    {
       int left = prefix[m][j];
       int right = prefix[m][n] - left;

       int small = min(left, right);
       ans = min(ans, small);
    }


    for(auto x: prefix){
        for(auto y: x){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
};

