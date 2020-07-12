#include<bits/stdc++.h>
using namespace std;

#define Max 900009

int parent[Max];
int s[Max];
int sizee;
void makeSet(int n)
{
    for(int i=0;i<=n;i++)
    parent[i]=i, s[i]=1;

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
        //printf("Frnds");
    }
    else parent[u]=v, s[v]+=s[u];
}
int main()
{
    int n,m;
    cin>>n>>m;

    makeSet(n+7);

    for (int i=0; i < m; i++)
    {

        int x;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            int y,prev;
            cin>>y;

            if(j>0)
            {
                Union(prev,y);

            }
            prev=y;
        }
    }

    for(int i=1;i<=n;i++)
        cout<<s[Find(i)]<<" ";

    return 0;
}

