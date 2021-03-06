#include<bits/stdc++.h>
using namespace std;

const int N=100005;
vector<int>V[N];
bool vis[N];
bool used[N];
int countt=0;

void dfs(int s)
{
    vis[s]=true;
    //cout<<s<<" ";
    for(int x:V[s] )
    {
       // cout<<x<<" "<<V[s].size()<<endl;
        if(vis[x]==true)
            continue;
        dfs(x);
    }
}

void dfsUsed(int s)
{
   // cout<<"check ";
    used[s]=true;
    ++countt;


    for(int x:V[s])
    {

        if(!used[x] and !vis[x])
        dfsUsed(x);
    }

    //return countt;
}

int main()
{
    int n,m,source;
    cin>>n>>m>>source;

    for(int i=0;i<m;i++)
    {
        int p,q;
        cin>>p>>q;
        V[p].push_back(q);
    }
    memset(vis,false,sizeof(vis));

    dfs(source);



    vector<pair<int,int> >help;

    int k=0,kount;
    for(int i=1;i<=n;i++)
    {
         countt=0;
        if(!vis[i])
        {
            memset(used,false,sizeof(used));
            dfsUsed(i);

            help.push_back(make_pair(countt,i));
        }

    }

    sort(help.begin(),help.end());
    reverse(help.begin(),help.end());

    int ans=0;
    for(int i=0;i<help.size();i++)
    {
        pair<int,int>temp;
        temp=help[i];
        if(!vis[temp.second])
        {
            dfs(temp.second);
            ans+=1;
        }
    }

    cout<<ans;
}
