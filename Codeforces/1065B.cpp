#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long node,edge,total,minn,maxx;
    cin>>node>>edge;

     total=2*edge;
     minn=node-total;
    if(minn<0)minn=0;

    for(long long i=0;i<=node;i++)
    {
        if(i==0 or i==1)total=0;
        else
        total=i*(i-1)/2;//cout<<i<<" "<<total<<endl;
        if(total>=edge)
        {
            maxx=node-i;
            break;
        }
    }

    cout<<minn<<" "<<maxx;

}
