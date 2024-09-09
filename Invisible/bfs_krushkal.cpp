#include<bits/stdc++.h>
using namespace std;

const int N = 100005;
vector<int> V[N];
int dis[N];
bool vis[N];
vector<int> parents[N];  // Stores all parents of each node for path reconstruction
int node, edge, A, B;
#define MAXN 100005
int pr[MAXN];
vector<edges> e;

struct edges
{
    int u, v, w;
    bool operator<(const edges& p) const
    {
        return w < p.w;
    }
};


void bfs(int s)
{
    queue<int> Q;
    Q.push(s);
    dis[s] = 0;
    memset(vis, 0, sizeof(vis));
    vis[s] = true;

    while(!Q.empty())
    {
        int x = Q.front();
        Q.pop();

        for(int i = 0; i < V[x].size(); i++)
        {
            int u = V[x][i];
            if (!vis[u])
            {
                vis[u] = true;
                dis[u] = dis[x] + 1;
                Q.push(u);
            }
            // Check if we can reach 'u' with the shortest distance via 'x'
            if (dis[u] == dis[x] + 1)
            {
                parents[u].push_back(x);
            }
        }
    }
}

// Function to recursively build all paths from end to start
void findPaths(vector<vector<int>>& paths, vector<int>& tempPath, int current)
{
    if (current == -1 || current == A)
    {
        paths.push_back(tempPath);
        return;
    }
    for (int parent : parents[current])
    {
        tempPath.push_back(parent);
        findPaths(paths, tempPath, parent);
        tempPath.pop_back();
    }
}




int Find(int r)
{
    return pr[r]= (pr[r]==r) ? r:Find(pr[r]);
}


int mst(int n)//n is for number of node
{
    sort(e.begin(), e.end());
    for (int i = 1; i <= n; i++)
        pr[i] = i;

    int kount = 0, s = 0;
    for (int i = 0; i < e.size(); i++)
    {
        int u = Find(e[i].u);
        int v = Find(e[i].v);
        if (u != v)
        {
            pr[u] = v;
            kount++;
            s += e[i].w;
            if (kount == n - 1)
                break;
        }
    }
    return s;
}

int main()
{

    cin >> node >> edge;
    for(int i = 1; i <= edge; i++)
    {
        int u, v, w;
        cin >> u >> v>> w;
        V[u].push_back(v);
        V[v].push_back(u); // Bi-directional

    }
    cin >> A >> B; // Read nodes A and B

    bfs(A); // Perform BFS from node A to find all shortest paths to B

    vector<vector<int>> allPaths;
    vector<int> tempPath;
    tempPath.push_back(B);
    findPaths(allPaths, tempPath, B);

    // Output all paths
    map<tuple<int, int>, int > mt;

    for (auto& path : allPaths)
    {
        reverse(path.begin(), path.end());  // Paths are collected in reverse

        int avoidPath=0;
        if(dis[B] != path.size())
        {
            avoidPath = 1;
        }

        int prev = A;

        int current;

        for (int node : path)
        {
            if(node == prev) continue;
            current = node;
            cout << node << " ";

            if(avoidPath)
                mt[make_tuple(prev, node)] = 1;

            prev = node;
        }

        mt[make_tuple(current, B)] = 1;
        avoidPath = 0;
        cout << "\n";
    }


    for (int i = 1; i <= edge; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges get;
        get.u = u;
        get.v = v;

        if(make_tuple(u, v))
            get.w = INT_MAX;
        else
        get.w = w;

        e.push_back(get);
    }
    cout << mst(node) << endl;
}
