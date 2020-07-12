#include<bits/stdc++.h>
using namespace std;

#define Max 100000
#define NL     "\n"

int parent[Max];
int ans;

void makeSet(int n)
{
    for(int i=0; i<n; i++)
        parent[i]=i;

}

int Find(int reprasentative)
{
    if (parent[reprasentative] == reprasentative)
    {
        return reprasentative;
    }
    return parent[reprasentative] = Find(parent[reprasentative]);
}
void Union(int a,int b)
{
    int u = Find(a);
    int v = Find(b);
    if(u == v)
    {
        if(parent[v]!=u)
            ans++;
    }
    else
        parent[v]=u;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        makeSet(n+10);
        for(int i=0;i<k;i++)
        {
            int c,x,y;
            cin>>c>>x>>y;

            if(x>n or y>n)
            {
                ans++;
                continue;
            }

            Union(x,y);

        }
        cout<<ans<<NL;
    }



    return 0;
}

