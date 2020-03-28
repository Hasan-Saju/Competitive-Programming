#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,zero=0,pluss=0,minuss=0,coin=0;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]==0)
            zero=1;
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]<0)
            minuss++;
        else
            pluss++;
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]<0)
            coin=coin+-1+abs(ara[i]);
        else
            coin+=abs(1-ara[i]);
    }
     if(minuss%2==0)
        {
            cout<<coin;
        }
        else if(zero)
        {
            cout<<coin;
        }
        else
            cout<<coin+2;

}
