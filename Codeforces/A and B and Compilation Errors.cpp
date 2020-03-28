#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j=0;
    cin>>n;
    long long ara[n],ara2[n-1],ara3[n-2];
    for(i=0;i<n;i++)cin>>ara[i];
    for(i=0;i<n-1;i++)cin>>ara2[i];
    for(i=0;i<n-2;i++)cin>>ara3[i];
    sort(ara,ara+n);
    sort(ara2,ara2+n-1);
    sort(ara3,ara3+n-2);
    for(i=0;i<n-1;i++)
    {
        for(;j<n;j++)
        {
            if(ara2[i]==ara[j])
            {
                ara[j]=0;
            break;
            }
        }
    }
    j=0;
     for(i=0;i<n-2;i++)
    {
        for(;j<n-1;j++)
        {
            if(ara3[i]==ara2[j])
            {
                ara2[j]=0;
            break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(ara[i])cout<<ara[i]<<"\n";
    }
     for(i=0;i<n-1;i++)
    {
        if(ara2[i])cout<<ara2[i];
    }
    return 0;

}
