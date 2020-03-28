#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,c,d,ans;
    cin>>a>>b>>c>>d;

    int ara[3],ara2[3];
    ara[0]=a;
    ara[1]=b;
    ara[2]=c;
    sort(ara,ara+3);

    if(ara[1]-ara[0]>=d)
        ara2[0]=ara[0];
    else
        ara2[0]=ara[1]-d;

    ara2[1]=ara[1];

    if(ara[2]-ara[1]>=d)
        ara2[2]=ara[2];
    else
        ara2[2]=ara[1]+d;

    ans=abs(ara2[0]-ara[0])+abs(ara2[2]-ara[2]);
    cout<<ans;

}
