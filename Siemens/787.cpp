#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct edge
    {
        int u, v, w;
    };

    vector<edge>V;
    vector<int>dis;

    int bellmanFord(int src, int dst, int k)
    {
        dis.assign(105, INT_MAX);

        dis[src]=0;

        for(int i=0; i<k+1; i++)
        {
            vector<int>temp = dis;
            for(int j=0; j<V.size(); j++)
            {
                edge e = V[j];

                if(dis[e.u]==INT_MAX)
                    continue;

                if(dis[e.u]+e.w < temp[e.v])
                    temp[e.v] = dis[e.u]+e.w;
            }

            dis = temp;
        }

        return dis[dst]!= INT_MAX ? dis[dst] : -1;
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k)
    {
        for(auto f:flights)
        {
            edge e;
            e.u = f[0];
            e.v = f[1];
            e.w = f[2];

            V.push_back(e);
        }

        return bellmanFord(src, dst, k);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {0,1,100}, {1,2,100}, {0,2,500} };
    cout<<obj.findCheapestPrice(3, vec, 0, 2,1);
}

