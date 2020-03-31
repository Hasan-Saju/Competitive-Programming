#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fWrite      freopen("out.txt", "w", stdout);

const int N=100005;
vector<int>V[N];
vector<int>path;
int indegree[N];
int nodes,edges;

void topsort(int s)
{
    queue<int>Q;
    for(int i=1;i<=nodes;i++)
        if(indegree[i]==0)Q.push(i);

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        path.push_back(u);
        for(int i=0;i<V[u].size();i++)
        {
            int x=V[u][i];
            indegree[x]--;
            if(indegree[x]==0)Q.push(x);
        }

    }

}

int main()
{
    fast
    //fWrite

    while(cin>>nodes>>edges and nodes!=0 )
    {
        for(int j=0;j<edges;j++)
        {

        int x,y;
        cin>>x>>y;
        V[x].push_back(y);
        indegree[y]++;

        }

        topsort(nodes);

        for(int i=0;i<path.size();i++)
        {
             cout<<path[i];
             if(i!=path.size()-1)cout<<" ";
        }

            cout<<endl;

            path.clear();
            for(int i=0;i<=nodes;i++)V[i].clear();
            memset(indegree,0,sizeof(indegree));

    }

}


