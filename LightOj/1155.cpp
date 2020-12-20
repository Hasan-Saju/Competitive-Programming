#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int> >capacity(200,vector<int>(200,0));
vector<int>adj[200];
int val[200];

int bfs(int s, int t, vector<int>& parent)
{
    cout<<"hello bfs"<<endl;
    //fill(parent.begin(), parent.end(), -1);
    for(int p=0; p<=200; p++)
        parent[p]=-1;

    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, INT_MAX});

    while (!q.empty())
    {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();
        cout<<"bfs "<<cur<<endl;

        for (int next : adj[cur])
        {
             cout<<" next "<<next<<" param "<<parent[next]<<" "<<capacity[cur][next]<<" "<<val[next]<<endl;
            if (parent[next] == -1 && capacity[cur][next]>0 && val[next]>0 )
            {
                parent[next] = cur;
                int new_flow = min( min(flow, capacity[cur][next]), val[next]);
                cout<<next<<" bfs er ekdom vitor "<<new_flow<<endl;
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
    vector<int> parent(n+2);
    int new_flow;
   // cout<<"in\n";
    //cout<<bfs(s,t,parent)<<"\n";

    while (new_flow = bfs(s, t, parent))
    {
        flow += new_flow;
        cout<<flow<<" flow "<<new_flow<<"\n";

        int cur = t;
        while (cur != s)
        {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;

            //val[prev]-=new_flow;
            val[cur]-=new_flow;

            capacity[cur][prev] += new_flow;
            cout<<prev<<" -> "<<cur<<"\n";
            cur = prev;
        }
    }

    return flow;
}

int main()
{

    int test;
    cin>>test;


    for(int i=1; i<=test; i++)
    {
        int n;
        cin>>n;
        memset(val,0,sizeof(val));

        val[0]=INT_MAX;
        val[n+1]=INT_MAX;

        for(int j=1; j<=n; j++)
        {
            int x;
            cin>>x;
            val[j]=x;
        }

        int edge;
        cin>>edge;

        for(int j=0; j<edge; j++)
        {
            int a,b,cost;
            cin>>a>>b>>cost;


            adj[a].push_back(b);
            adj[b].push_back(a);
            capacity[a][b]+=cost;

        }
        int monu,dhaka;
        cin>>monu>>dhaka;


        for(int k=0; k<monu; k++)
        {
            int x;
            cin>>x;
            adj[0].push_back(x);
            adj[x].push_back(0);

            capacity[0][x]=INT_MAX;
        }
        for(int k=0; k<dhaka; k++)
        {
            int x;
            cin>>x;
            adj[x].push_back(n+1);
            adj[n+1].push_back(x);
            capacity[x][n+1]=INT_MAX;
        }

//        cout<<"matrix\n";
//        for(int x=0; x<=n+1; x++)
//        {
//            for(int z=0; z<=n+1; z++)
//                cout<<capacity[x][z]<<" ";
//            cout<<endl;
//        }



        cout<<"Case "<<i<<": "<<maxflow(0,n)<<"\n";

        for(int j=0; j<200; j++)
        {
            adj[j].clear();
        }
        capacity = vector<vector<int> > (200, vector<int>(200, 0));
    }



}

