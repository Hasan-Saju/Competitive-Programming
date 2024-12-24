#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<pair<int, int>>adj[3000];
    vector<int>dist;

public:
    int calculateIndex(int a, int b, int rowNum, int colNum)
    {
        return (a*colNum)+b;
    }
    int checkBorder(int a, int b, int rowNum, int colNum)
    {
        if(a>=0 and b>=0 and a<rowNum and b<colNum)
            return 1;
        else
            return 0;
    }

    void Dijkstra(int src)
    {
        multiset<pair<int, int>> ms;
        dist.assign(3000, INT_MAX);

        dist[src] = 0;
        ms.insert({0,src});

        while(!ms.empty())
        {
            pair<int, int>temp = *(ms.begin());
            int u = temp.second;
            ms.erase(ms.begin());
            cout<<u<<"\n";
            for(int i=0; i<adj[u].size(); i++)
            {
                int v = adj[u][i].second;
                int cost = adj[u][i].first;
                //cout<<dist[u]<<" "<<dist[v]<<"\n";
                if(dist[v]>max(dist[u], cost))
                {
                    dist[v] =  max(dist[u], cost);
                    ms.insert({dist[v], v});
                    //cout<<u<<" "<<v<<" "<<dist[v]<<"\n";
                }
            }
        }
    }
    int swimInWater(vector<vector<int>>& grid)
    {
        int rowNum = grid.size();
        int colNum = grid[0].size();
        int X[4] = {1, -1, 0, 0};
        int Y[4] = {0, 0, 1, -1};


        for(int i=0; i<rowNum; i++)
        {
            for(int j=0; j<colNum; j++)
            {
                for(int k=0; k<4; k++)
                {
                    if(checkBorder(i+X[k], j+Y[k], rowNum, colNum))
                    {
                        int nodeCurrent = calculateIndex(i,j, rowNum, colNum);
                        int neigbor = calculateIndex(i+X[k], j+Y[k], rowNum, colNum);

                        int ni = i + X[k];
                        int nj = j + Y[k];

                        if (checkBorder(ni, nj, rowNum, colNum))
                        {
                            int nodeCurrent = calculateIndex(i, j, rowNum, colNum);
                            int neighbor = calculateIndex(ni, nj, rowNum, colNum);
                            int weight = max(grid[i][j], grid[ni][nj]);
                            adj[nodeCurrent].push_back({weight, neighbor});
                        }

                    }
                }
            }
        }

        for(int i=0; i<25; i++)
        {
            for(auto a:adj[i])
                cout<<a.second<<" ";
            cout<<"\n";
        }
        cout<<"\n\n\n";

        Dijkstra(0);
        return dist[calculateIndex(rowNum-1, colNum-1, rowNum, colNum)];
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,1,2,3,4},{24,23,22,21,5},
        {12,13,14,15,16},{11,17,18,19,20},{10,9,8,7,6}
    };
    vector<vector<int>>vec2 = {{3,2},{0,1}};
    cout<<obj.swimInWater(vec2);
}
