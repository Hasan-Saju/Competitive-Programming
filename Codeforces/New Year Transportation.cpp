#include<bits/stdc++.h>
using namespace std;
bool vis[40000];
int vec[40000];
int n,t;

void dfs(int p)
{
    vis[p]=1;
    if(p>=n)
        return;
    p+=vec[p];
    dfs(p);
}

int main()
{
    int i,x;
    memset(vis,0,sizeof(vis));
    cin>>n>>t;
    //n--;
    for(i=1; i<=(n-1); i++)
    {
        cin>>vec[i];
    }
    dfs(1);

    if(vis[t])
        cout<<"YES";
    else
        cout<<"NO";

}
