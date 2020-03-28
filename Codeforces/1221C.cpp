#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,i,c,m,x,base,team;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>c>>m>>x;
        base=min(c,m);
        team=(c+m+x)/3;
        cout<<min(base,team)<<endl;
    }
}
