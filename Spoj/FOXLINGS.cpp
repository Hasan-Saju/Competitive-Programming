#include<bits/stdc++.h>
using namespace std;

#define Max 200009

int parent[Max];
int ans;

void makeSet(int n)
{
    parent[n]=n;

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
    if(u != v)
        parent[u]=v,
        ans--;


}
int main()
{
    int n,m;
    cin>>n>>m;

    for (int i=0; i <= 2*m ; i++)
    {
        makeSet(i);
    }
    ans=n;

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;

       Union(a,b);
    }
    cout<<ans;
}
