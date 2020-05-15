#include<bits/stdc++.h>
using namespace std;

int graph[105][105];
int next[105][105];
int nodes,edges;

void FloydWarshall()
{
    int i,j,k;
    for(int k=1;k<=nodes;k++)
    {
        for(int i=1;i<=nodes;i++)
        {
            for(int j=1;j<=nodes;j++)
            {
                if(graph[i][j]>graph[i][k]+graph[k][j])
                {
                    graph[i][j]=graph[i][k]+graph[k][j];
                    next[i][j]=next[i][k];//for path
                }

                 //graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j])
                //graph[i][j]=graph[i][j] || (graph[i][k] && graph[k][j]); //kon kon node theke kon kon node a jawa jay,  1 thakle jawa jay
            }
        }
    }
}

vector<int>path;
findPath(int start,int finish)
{
    path.push_back(start);
    while(start!=finish)
    {
        start=next[start][finish];
        path.push_back(start);
    }
}

int main()
{
    cin>> nodes>> edges;
    for(int i=1;i<=nodes;i++)
    {
        for(int j=1;j<=nodes;j++)
        {
            if(i==j) graph[i][j]=0;
            else graph[i][j]=INT_MAX;
        }
    }

    //input for every next[i][j]=j;

    for(int i=1;i<=edges;i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        graph[u][v]=w;
        graph[v][u]=w;
    }
}
