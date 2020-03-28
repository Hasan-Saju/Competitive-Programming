#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    int ara[t];

    for(i=0;i<t;i++)
    {
    int n,x;
    cin>>n>>x;
    ara[i]=2*x;
    }
    for(i=0;i<t;i++)cout<<ara[i]<<"\n";
    return 0;

}
