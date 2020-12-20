#include<bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int n;
vector<vector<int> >capacity(200,vector<int>(200,0));
vector<int>adj[200];
#define fWrite      freopen("out.txt", "w", stdout);

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

    // cout<<"in\n";
    int flow = 0;
    vector<int> parent(n+1);
    int new_flow;

    while (new_flow = bfs(s, t, parent))
    {
        flow += new_flow;
        //cout<<flow<<" flow "<<new_flow<<endl;
        int cur = t;
        while (cur != s)
        {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] -= new_flow;
            //cout<<capacity[prev][cur]<<" "<<prev<<" -> "<<cur<<endl;
            cur = prev;
        }
    }

    return flow;
}

int main()
{
    //fWrite
    int test;
    cin>>test;
    for(int z=1; z<=test; z++)
    {
        cin>>n;

        int s,t,edge;
        cin>>s>>t>>edge;

        for(int i=0; i<edge; i++)
        {
            int a,b,cost;
            cin>>a>>b>>cost;

            //cout<<"ok1";
            adj[a].push_back(b);
            adj[b].push_back(a);
            //cout<<"ok2";

            //cout<<capacity[a][b]<<endl;

            capacity[a][b]+=cost;
            capacity[b][a]+=cost;
            //cout<<"ok"<<edge<<i<<endl;
            //   cout<<"matrix\n";
//            for(int i=1; i<=n; i++)
//            {
//                for(int j=1; j<=n; j++)
//                    cout<<capacity[i][j]<<" ";
//                cout<<endl;
//            }
        }



        cout<<"Case "<<z<<": "<<maxflow(s,t);
        cout<<"\n";


        for(int j=0; j<200; j++)
        {
            adj[j].clear();
        }
        capacity = vector<vector<int> > (200, vector<int>(200, 0));

//            for(int i=1; i<=n; i++)
//            {
//                for(int j=1; j<=n; j++)
//                    cout<<capacity[i][j]<<" ";
//                cout<<endl;
//            }

    }

}
