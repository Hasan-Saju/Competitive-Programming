#include<bits/stdc++.h>
using namespace std;
vector<int>V[100005];

const int N=100005;
bool vis[N];
int ans=0;

int dfs(int s)
{
    if(vis[s]==true)return 0;
    vis[s]=true;
    int kount=1;
    for(int x:V[s])//v[s] er prottek ta element ektar por ekta x a ashte thakbe
    {                       //int i=0;i<V[s].size();i++   x=V[s][i];
        if(vis[x]==false)
        kount+=dfs(x);

    }
    //cout<<s<<" "<<kount<<endl;
    if(kount%2==0)ans++;
    return kount;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        V[x].push_back(y);
        V[y].push_back(x);
    }
    if(n%2==1)cout<<"-1";
    else
    {
        dfs(1);
    cout<<ans-1;
    }


}
