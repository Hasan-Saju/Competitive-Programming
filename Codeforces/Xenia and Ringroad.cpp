#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,j,k,m,kount=0;
    cin>>n>>m;
    int ara[m+1];
    ara[0]=1;
    for(i=1;i<m+1;i++)cin>>ara[i];

    for(i=0;i<m;i++)
    {
        if(ara[i]<ara[i+1])kount+=ara[i+1]-ara[i];
        else if(ara[i]>ara[i+1])kount+=n-ara[i]+ara[i+1];
    }
    cout<<kount;

}
