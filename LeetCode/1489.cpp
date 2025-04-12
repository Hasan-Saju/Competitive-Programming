#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<int>pr;
    vector<array<int,4>>edgeList;
    int Find(int r)
    {
        return pr[r] = (pr[r]==r) ? r: Find(pr[r]);
    }

    int buildMSN(int n, int skip, int force)
    {
        for(int i=0; i<n; i++)
            pr[i]=i;

        int kount=0, sum=0;

        if(force!=-1)
        {
            for(int i=0; i<edgeList.size(); i++)
            {
                auto edge = edgeList[i];
                if(edge[3]==force)
                {
                    int u = Find(edge[0]);
                    int v = Find(edge[1]);

                    if(u!=v)
                    {
                        pr[u] = v;
                        sum += edge[2];
                        kount++;
                        break;
                    }
                }


            }
        }

        for(int i=0; i<edgeList.size(); i++)
        {
            auto edge = edgeList[i];
            if(force!=-1 and edge[3]==force)
                continue;
            if(skip!=-1 and edge[3]==skip)
                continue;

            int u = Find(edge[0]);
            int v = Find(edge[1]);

            if(u!=v)
            {
                pr[u] = v;
                sum += edge[2];
                kount++;
                if(kount==n-1)
                    break;
            }
        }
        if(kount<n-1)
            return INT_MAX;
        else
            return sum;
    }
public:
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges)
    {
        pr.resize(n,0);
        for(int i=0; i<edges.size(); i++)
            edgeList.push_back({edges[i][0], edges[i][1], edges[i][2], i});

        sort(edgeList.begin(), edgeList.end(), [](auto& a, auto& b)
        {
            return a[2]<b[2];
        });

        int msnSum = buildMSN(n, -1, -1);
        cout<<msnSum<<"\n";

        vector<int>critical;
        vector<int>pseudo;
        for(int i=0; i<edgeList.size(); i++)
        {
            auto edge = edgeList[i];

            int skipSum = buildMSN(n, edge[3], -1);
            if(skipSum>msnSum)
                critical.push_back(edge[3]);
            else
            {
                int forceSum = buildMSN(n, -1, edge[3]);
                if(skipSum==forceSum and forceSum==msnSum)
                    pseudo.push_back(edge[3]);
            }
        }

        vector<vector<int>>res;
        res.push_back(critical);
        res.push_back(pseudo);

        return res;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,1,1},{1,2,1},{2,3,2},{0,3,2},{0,4,3},{3,4,3},{1,4,6}};
    obj.findCriticalAndPseudoCriticalEdges(5,vec);
}

//Check if an edge is critical:
//
//“Skip” the edge, attempt to form an MST.
//If the MST cost becomes larger (or impossible to form, INT_MAX), then that edge is critical.
//
//Check if an edge is pseudo-critical (only for edges that are not critical):
//“Force” the edge into your MST first (i.e., union its endpoints first and add its weight),
//then add the rest of the edges in sorted order. If the total MST cost is the same as the original MST cost,
//this edge is pseudo-critical. If forcing it increases the cost or fails to form an MST, then that edge does not appear in any MST.
