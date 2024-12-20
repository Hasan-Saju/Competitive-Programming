#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct edge
    {
        int u, v, w;
        bool operator<(const edge& p) const
        {
            return w<p.w;
        }
    };

    int pr[1005];
    vector<edge>e;

    int Find(int r)
    {
        return pr[r] = pr[r]==r ? r:Find(pr[r]);
    }
    int mst(int n)
    {
        sort(e.begin(), e.end());
        for(int i=0; i<=n; i++)
            pr[i] = i;

        int kount=0, cost = 0;
        for(int i=0; i<e.size(); i++)
        {
            int u = Find(e[i].u);
            int v = Find(e[i].v);

            if(u!=v)
            {
                pr[u] = v;
                kount++;
                cost += e[i].w;
                if(kount==n-1)
                    break;
            }
        }
        return cost;
    }
    int minCostConnectPoints(vector<vector<int>>& points)
    {
        for(int i=0; i<points.size(); i++)
        {
            for(int j=i+1; j<points.size(); j++)
            {
                edge get;
                int manhat = abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]);
                get.u = i+1;
                get.v = j+1;
                get.w = manhat;
                e.push_back(get);
            }
        }
        int ans = mst(points.size());
        cout<<ans;
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{3,12},
        {
            -2,5
            },
        {
            -4,1
            },

    };
    obj.minCostConnectPoints(vec);
}
