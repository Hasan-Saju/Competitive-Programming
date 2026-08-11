#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct edge
    {
        int u,v,w;
    };

    vector<edge>V;
    int vis[1005];
    int pr[10005];

    static bool mycmp(const edge& a, const edge& b)
    {
        return a.w<b.w;
    }

    int Find(int r)
    {
        if(pr[r]==r)
            return r;
        return pr[r] = Find(pr[r]);
    }

    int mst(int n)
    {
        sort(V.begin(), V.end(), mycmp);

        for(int i=1; i<=n; i++)
            pr[i] = i;

        int minCost = 0;
        int kount=0;

        for(int i=0; i<V.size(); i++)
        {
            edge temp = V[i];
            int a = temp.u;
            int b = temp.v;
            int c = temp.w;

            int x = Find(a);
            int y = Find(b);

            if(x!=y)
            {
                pr[x]=y;
                minCost+=c;
                kount++;

                if(kount==n-1)
                {
                    break;
                }
            }
        }

        return minCost;
    }

    int minCostConnectPoints(vector<vector<int>>& points)
    {
        for(int i=0; i<points.size(); i++)
        {
            for(int j=i+1; j<points.size(); j++)
            {
                int manh = abs(points[i][0]-points[j][0]) + abs(points[i][1]-points[j][1]);
                edge e;
                e.u = i+1;
                e.v = j+1;
                e.w = manh;

                V.push_back(e);
            }
        }

        return mst(points.size());

    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {0,0}, {2,2}, {3,10}, {5,2}, {7,0} };
    cout<<obj.minCostConnectPoints(vec);
}

