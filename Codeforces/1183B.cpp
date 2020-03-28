#include<bits/stdc++.h>
using namespace std;
int main()

{
    int q,i,j;
    cin>>q;
    for(i=0;i<q;i++)
    {
        int n,k,x,minn,maxx;
        cin>>n>>k;
        int ara[n];
        memset(ara,0,sizeof(ara));
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+n);
        minn=ara[0]+k;
        maxx=ara[n-1]-k;
       // cout<<endl<<minn<<maxx;
        if(minn==maxx)cout<<maxx<<endl;
        else if(maxx<minn)cout<<minn<<endl;
        else  cout<<"-1"<<endl;
    }
    }
