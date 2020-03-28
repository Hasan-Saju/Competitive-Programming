#include<bits/stdc++.h>
using namespace std;

int ara[m];
int ans[m];

int main()
{
    int n,m;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+ara.size());
    for(i=0;i+n-1<m;i++)
    {
        ans[i]=ara[i+n-1]-ara[i];
    }

}
