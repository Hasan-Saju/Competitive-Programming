#include<bits/stdc++.h>
using namespace std;

const int N=100005;
set<int>V[N];
bool vis[N];
char s[55][55];
int n,m;
int X[]={1,-1,0,0};
int Y[]={0,0,-1,1};


void input()
{
//    for(int i=0; i<n; i++)
//        cin>>s[0];

        for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>s[i][j];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int node= (m*i)+(j+1);
            for(int k=0;k<4;k++)
            {
                int node2= (m*(i+X[k]))+(j+Y[k]+1);
                 //cout<<node<<" "<<node2<<" "<<i<<" "<<j<<" "<<i+X[k]<<" "<<j+Y[k]<<" "<<s[i][j]<<" "<<s[i+X[k]][j+Y[k]]<<"\n";
                 //cout<<"tf "<<s[i][j]==s[i+X[k]][j+Y[k]]<<" ";//<<i+X[k]>=0<<" "<<i+X[k]<n<<" "<<j+Y[k]>=0<<" "<<j+Y[k]<m<<"\n";

               if( s[i][j]==s[i+X[k]][j+Y[k]] and i+X[k]>=0 and i+X[k]<n and j+Y[k]>=0 and j+Y[k]<m )
                {
                //cout<<"in"<<node<<" "<<node2<<"\n";
                V[node].insert(node2);
                V[node2].insert(node);
                }
            }
        }
    }

}


bool dfs(int node, int parent)
{
    vis[node]=true;
   // cout<<node<<" ";
    for(int child:V[node])
    {
        if(vis[child]==false)
        {
            if(dfs(child,node)==true)
                return true;
        }
        else
            if(child!=parent)
            {
                //cout<<" cp "<<child<<" "<<parent<<" ";
                return true;
            }

    }
    return false;
}


int main()
{

    cin>>n>>m;
    input();

    for(int i=1;i<=n*m;i++)
    {
        if(vis[i])
            continue;
        if(dfs(i,-1))
        {
            //cout<<i<<" ";
            cout<<"Yes";
            return 0;
        }
    }

    cout<<"No";

}

