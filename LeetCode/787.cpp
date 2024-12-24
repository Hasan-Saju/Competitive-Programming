#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    struct edge
    {
        int u,v,w;
    };
    vector<edge>V;
    vector<int>dis;

    int bellmanFord(int src, int dst, int k)
    {
        dis.assign(105, INT_MAX);
        dis[src] = 0;
        for(int i=0; i<=k; i++)
        {
            vector<int>temp = dis;
            for(int j=0; j<V.size(); j++)
            {
                edge e = V[j];
                if(dis[e.u] == INT_MAX)
                    continue;
                if(dis[e.u] + e.w < temp[e.v])
                    temp[e.v] = dis[e.u] + e.w;
            }
            dis = temp;
        }
        return dis[dst] == INT_MAX ? -1: dis[dst];
    }

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        for(auto f: flights)
            V.push_back({f[0], f[1], f[2]});

        return bellmanFord(src, dst, k);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,1,100},{1,2,100},{2,0,100},{1,3,600},{2,3,200}};
    obj.findCheapestPrice(3, vec, 0, 3,1);
}

