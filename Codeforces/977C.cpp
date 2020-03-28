#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,num=0;
    cin>>n>>k;
    int ara[n];
    for(i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    i=0;
    if(num==k)
        {
            if(ara[i]-1==0)cout<<ara[i]-2;
        else cout<<ara[i]-1;
        return 0;
        }
    for(i=0;i<n;i++)
    {
         num++;
         if(num==k)
        {
            if(ara[i]!=ara[i+1])
            {
                cout<<ara[i];
                return 0;
            }
        }


    }
    cout<<"-1";
}
