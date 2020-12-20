#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int n;
vector<vector<int> >capacity(200,vector<int>(200,0));
vector<int>adj[200];

int bfs(int s, int t, vector<int>& parent)
{
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, INF});

    while (!q.empty())
    {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adj[cur])
        {
            if (parent[next] == -1 && capacity[cur][next])
            {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxflow(int s, int t)
{
    int flow = 0;
    vector<int> parent(n+1);
    int new_flow;

    while (new_flow = bfs(s, t, parent))
    {
        flow += new_flow;
        int cur = t;
        cout<<"flow: "<<new_flow<<"\n";
        while (cur != s)
        {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;

            cout<<prev<<" -> "<<cur<<endl;

            cur = prev;
        }
        cout<<"\n\n\n";
    }

    return flow;
}

int main()
{

    cin>>n;
    int edge;
    cin>>edge;

    for(int i=0; i<edge; i++)
    {
        int a,b,cost;
        cin>>a>>b>>cost;


        adj[a].push_back(b);
        adj[b].push_back(a);

        capacity[a][b]=cost;

    }

    cout<<maxflow(0,n-1);
    //clearing vectors
    for(int j=0; j<200; j++)
    {
        adj[j].clear();
    }
    capacity = vector<vector<int> > (200, vector<int>(200, 0));


}
