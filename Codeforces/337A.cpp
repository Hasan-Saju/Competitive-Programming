#include<bits/stdc++.h>
using namespace std;

int ara[10000];
int ans[1000];

int main()
{
    int n,m,i,len=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+m);
    for(i=0;i+n-1<m;i++)
    {
        ans[i]=ara[i+n-1]-ara[i];
        len++;
    }
    sort(ans,ans+len);
    cout<<ans[0];

}
