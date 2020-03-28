#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int k,round=0,kount=0,i,ans;
    cin>>n>>k;
    for(i=n.size()-1;i>=0;i--)
    {
        round++;
        if(n[i]=='0')kount++;
        if(k==kount)break;

    }
    if(k!=kount)ans=n.size()-1;
    else ans=round-kount;
    cout<<ans;
}
