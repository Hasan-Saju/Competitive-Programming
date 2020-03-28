#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,maxx=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        maxx=max(maxx,x+y);
    }
    cout<<maxx;
}
