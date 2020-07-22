#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
const int N=30;
set<int>V[N];
int vis[N];

void dfs(int s)
{
    vis[s]=1;
    //cout<<s<<" ";
    for(auto x:V[s] )
    {
        if(vis[x]==1)
            continue;
        dfs(x);
    }
}

int main()
{
    fast
    memset(vis,-1,sizeof(vis));
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        int node=s[0]-'a'+1;
        vis[node]=0;

        for(int j=1;j<s.size();j++)
        {
            int node2=s[j]-'a'+1;
            vis[node2]=0;

                V[node].insert(node2);
                V[node2].insert(node);
        }
    }

    ll ans=0;
    for(int i=1;i<=26;i++)
    {
        if(vis[i]==-1 or vis[i]==1)
            continue;
        ans++;
       // cout<<"\nin "<<i<<"\n";
        dfs(i);
    }
    cout<<ans;

}
