#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int n,i,j,sum,mid=0,md=0,sd=0,t1=0,t2=0;
    cin>>n;
    int ara[n][n];
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
        }
    }
    mid=n/2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                md+=ara[i][j];
            }
            if(i+j==n-1)
            {
                sd+=ara[i][j];
            }
            if(i==mid)
                t1+=ara[i][j];
            if(j==mid)
                t2+=ara[i][j];
        }
    }


    sum=md+sd+t1+t2-3*ara[mid][mid];
    cout<<sum;
  //  cout<<sum<<" "<<md<<" "<<sd<<" "<<t1<<" "<<t2;
}
