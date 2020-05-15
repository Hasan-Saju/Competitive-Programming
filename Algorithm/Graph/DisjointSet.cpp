#include<bits/stdc++.h>
using namespace std;

#define Max 100

int parent[Max];
int size;
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
    else parent[u]=v;
}
int main()
{

    for (int i=0; i < size; i++)
    {
        makeSet(i);
    }

    return 0;
}
