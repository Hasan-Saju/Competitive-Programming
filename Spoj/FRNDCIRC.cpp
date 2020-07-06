#include<bits/stdc++.h>
using namespace std;

#define Max 100

int parent[Max];
int size;
map<string,int>m;

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
    if(u == v)
    {
        printf("Frnds");
    }
    else parent[u]=v, m[u]+=m[v];
}
int main()
{

   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;

       for(int i=0;i<n;i++)
       {
           string a,b;
           cin>>a>>b;
           m[a]=1;
           m[b]=1;

       }
   }

}

