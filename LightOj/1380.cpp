#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
#define ll long long

typedef pair<int, int> iPair;
const ll N = 1005;
const ll M = 1005;
vector<iPair > adj[N];
int visited[N];
int cost[N][N];

void addEdge(vector <pair<int, int> > adj[], int u,
             int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

int primMST(int start,int V)
{
    priority_queue< iPair, vector <iPair>, greater<iPair> > pq;

    int src = start;
    vector<int> key(V, INF);
    vector<int> parent(V, -1);
    vector<bool> inMST(V, false);


    pq.push(make_pair(0, src));
    key[src] = 0;


    while (!pq.empty())
    {

        int u = pq.top().second;
        pq.pop();

        inMST[u] = true;

        for (auto x : adj[u])
        {

            int v = x.first;
            int weight = x.second;


            if (inMST[v] == false && key[v] > weight)
            {

                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }

    int expense=0;
    for (int i = 1; i < V; ++i)
        {
            visited[i]=1,visited[parent[i]]=1;
            //cout<<adj[parent[i]].second<<" ";
            expense+= cost[parent[i]][i];
            //printf("%d - %d\n", parent[i], i);
        }
        return expense;
}


int main()
{
    int t;
    cin>>t;

    for(int x=1; x<=t; x++)
    {
        int node,edge,start;
        cin>>node>>edge>>start;

        memset(visited,0,sizeof(visited));

        for(int i=0; i<edge; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
            cost[u][v]=w;
            //adj[v].push_back(make_pair(u,w));
        }
        int expense=primMST(start,node);

        bool imp=false;
        for(int i=1;i<node;i++)
            if(visited[i]==0)
            imp=true;
        if(imp)
            cout<<"Case "<<x<<": "<<"impossible"<<"\n";
        else
            cout<<"Case "<<x<<": "<<expense<<"\n";

    }

}


