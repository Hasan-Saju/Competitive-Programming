#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> bfs(vector<int> V[], int s, int n)
    {
        vector<int>vis(n, 0);
        vector<int>dis(n, INT_MAX);

        vis[s] = 1;
        dis[s] = 0;

        queue<int>Q;
        Q.push(s);

        while(!Q.empty())
        {
            int x = Q.front();
            Q.pop();

            for(auto node:V[x])
            {
                if(!vis[node])
                {
                    vis[node]=1;
                    dis[node] = dis[x]+1;
                    Q.push(node);
                }
            }
        }
        return dis;
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2)
    {
        vector<int>V[edges.size()];
        for(int i=0; i<edges.size(); i++)
            if(edges[i]!=-1)
                V[i].push_back(edges[i]);

        vector<int> disn1 = bfs(V, node1, edges.size());
        vector<int> disn2 = bfs(V, node2, edges.size());

        int ans = -1;
        int mnDist = INT_MAX;
        for(int i=0; i<edges.size(); i++)
        {
            //cout<<disn1[i]<<" ";
            if(disn1[i] == INT_MAX or disn2[i]==INT_MAX)
                continue;
            int highestInNode = max(disn1[i], disn2[i]);
            if(highestInNode<mnDist)
            {
                mnDist=highestInNode;
                ans = i;
            }
        }
//        cout<<"\n";
//        for(int i=0; i<edges.size(); i++)
//        {
//            cout<<disn2[i]<<" ";
//        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,2,3,-1};
    cout<<obj.closestMeetingNode(vec, 0, 1);
}

