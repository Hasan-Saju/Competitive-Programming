#include<bits/stdc++.h>
using namespace std;
int ara[1000];
int main()
{
    int n,m,i,j=0,x,sum=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x<0)
        {
            ara[j]=abs(x);
            j++;
        }
    }
    sort(ara,ara+j,greater<int>());
    for(i=0;i<m;i++)
    {
        //cout<<ara[i]<<" ";
        sum+=ara[i];
    }
    cout<<sum;
}
