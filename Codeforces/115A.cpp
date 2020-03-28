#include<bits/stdc++.h>
using namespace std;

#define MAX 4000

vector <int>boss;
vector<int>com[MAX];
int maxi=0,x,n;

void dfs(int b,int depth)
{
    int i;
    maxi=max(maxi,depth);
    for(i=0; i<com[b].size(); i++)
        dfs(com[b][i],depth+1);
}

int main()
{
    int i;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x==-1)
            boss.push_back(i);
        else
            com[x].push_back(i);
    }
    for(i=0; i<boss.size(); i++)
    {
        dfs(boss[i],1);
    }
    cout<<maxi;
}
