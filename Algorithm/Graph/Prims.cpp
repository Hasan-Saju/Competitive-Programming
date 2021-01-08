#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f

typedef pair<int, int> iPair;
const ll N = 100005;
vector<iPair > adj[N];

void addEdge(vector <pair<int, int> > adj[], int u,
									int v, int wt)
{
	adj[u].push_back(make_pair(v, wt));
	adj[v].push_back(make_pair(u, wt));
}

void primMST(int start,int V)
{
	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;

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

	for (int i = 1; i < V; ++i)
		printf("%d - %d\n", parent[i], i);
}


int main()
{
	int node;
	cin>>node;

    int edge;
    cin>>edge;

    for(int i=0;i<edge;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

	primMST(0,node);
}

///src: gfg
