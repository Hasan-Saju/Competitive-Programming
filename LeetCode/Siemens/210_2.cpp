#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int>adj[2005];
    vector<int>indegree;
public:
    vector<int> topSort(int n)
    {
        vector<int>ans;
        queue<int>q;
        for(int i=0; i<n; i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }

        while(!q.empty())
        {
            int x =  q.front();
            q.pop();
            ans.push_back(x);

            for(auto nx:adj[x])
            {
                indegree[nx]--;
                if(indegree[nx]==0)
                    q.push(nx);
            }
        }

        return ans.size() ==n ? ans : vector<int> {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)
    {
        indegree.assign(numCourses+1, 0);

        for(auto v:prerequisites)
        {
            adj[v[1]].push_back(v[0]);
            indegree[ v[0] ]++;
        }

        return topSort(numCourses);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {1,0} };
    obj.findOrder(2, vec);
}
