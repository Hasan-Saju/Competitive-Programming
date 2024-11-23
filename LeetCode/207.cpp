#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int>graph[2005];
    int indegree[2005];
    set<int>result;
public:
    void topSort(int n)
    {
        queue<int>q;
        for(int i=0; i<n; i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }

        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            result.insert(u);

            for(int i=0; i<graph[u].size(); i++)
            {
                indegree[graph[u][i]]--;
                if(indegree[graph[u][i]]==0)
                    q.push(graph[u][i]);
            }

        }
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
    {
        memset(indegree, 0, sizeof(indegree));
        for(auto vec:prerequisites)
        {
            graph[vec[1]].push_back(vec[0]);
            indegree[vec[0]]++;
        }
        for(int i=0;i<numCourses;i++)
            cout<<indegree[i]<<" ";

        topSort(numCourses);
        return (result.size()==numCourses) ? true:false;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,0},{0,1}};
        cout<<obj.canFinish(2,vec);
}

