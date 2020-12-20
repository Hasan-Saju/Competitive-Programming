#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int n;
vector<vector<int> >capacity(500,vector<int>(500,0));
vector<int>adj[500];
int val[500];

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
            if (parent[next] == -1 && capacity[cur][next])// and val[next]>0)
            {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
               // new_flow=min(new_flow,val[next]);

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
    vector<int> parent(500);
    int new_flow;

    while (new_flow = bfs(s, t, parent))
    {
        flow += new_flow;
        int cur = t;
        //cout<<"flow: "<<new_flow<<"\n";
        while (cur != s)
        {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;

            //val[cur]-=new_flow;

            //cout<<prev<<" -> "<<cur<<endl;

            cur = prev;
        }
        //cout<<"\n\n\n";
    }

    return flow;
}

int main()
{

    int t;
    cin>>t;

    for(int a=1; a<=t; a++)
    {
        cin>>n;

        int x;
        for(int b=0; b<200; b++)
            val[b]=INT_MAX;

        for(int b=1; b<=n; b++)
            {
                //cin>>val[b];
                cin>>x;
                capacity[b][200+b]=x;
            }


        int edge;
        cin>>edge;

        for(int i=0; i<edge; i++)
        {
            int a,b,cost;
            cin>>a>>b>>cost;

            adj[a].push_back(200+a);
            adj[200+a].push_back(a);

            adj[200+a].push_back(b);
            adj[b].push_back(200+a);

            adj[b].push_back(200+b);
            adj[200+b].push_back(b);


            capacity[200+a][b]+=cost;
        }

        int monu,dhaka;
        cin>>monu>>dhaka;

        for(int b=1; b<=monu; b++)
        {
            cin>>x;
            adj[0].push_back(x);
            adj[x].push_back(0);

            capacity[0][x]+=INT_MAX;
        }

        for(int b=1; b<=dhaka; b++)
        {
            cin>>x;
            adj[200+x].push_back(n+1);
            adj[n+1].push_back(200+x);

            capacity[200+x][n+1]=INT_MAX;
        }


        cout<<"Case "<<a<<": "<<maxflow(0,n+1)<<"\n";
        //clearing vectors
        for(int j=0; j<500; j++)
        {
            adj[j].clear();
        }
        capacity = vector<vector<int> > (500, vector<int>(500, 0));
    }



}
