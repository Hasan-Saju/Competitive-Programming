#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int>adj[101];
    vector<int>indegree;
public:
    int topSort(int n)
    {
        queue<int>q;
        int ans = -1;

        for(int i=0; i<n; i++)
            if(indegree[i]==0)
                q.push(i);

        if(q.size()>1)
            return -1;
        else
            ans = q.front();

        int nodeCount=0;

        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            nodeCount++;

            for(auto ele: adj[x])
            {
                indegree[ele]--;

                if(indegree[ele]==0)
                    q.push(ele);
            }
        }

        if(q.empty() and nodeCount==n)
            return ans;
        return -1;
    }

    int findChampion(int n, vector<vector<int>>& edges)
    {
        indegree.assign(101,0);
        for(auto edge:edges)
        {
            adj[edge[0]].push_back(edge[1]);
            indegree[edge[1]]++;
        }

        return topSort(n);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {0,1}, {1,2} };
    cout<<obj.findChampion(3, vec);
}

