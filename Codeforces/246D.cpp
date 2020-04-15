#include<bits/stdc++.h>
using namespace std;

const int N=300005;
set<int>S[N];
int col[N];

int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    set<int>unCol;

    for(int i=1;i<=nodes;i++)
    {
        int x;
        cin>>x;
        col[i]=x;
        unCol.insert(x);

    }

    for(int i=0;i<edges;i++)
    {
        int x,y;
        cin>>x>>y;
        if(col[x]!=col[y])
        {
        S[col[x]].insert(col[y]);
        S[col[y]].insert(col[x]);
        }

    }

    int ans=-999,temp,print;
    for(auto x: unCol)
    {
        temp=S[x].size();
        if(temp>ans)
        {
            ans=temp;
            print=x;
        }
        if(temp==ans)
        {
            print=min(print,x);
        }

    }
    cout<<print;
}
