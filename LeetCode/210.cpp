#include<bits/stdc++.h>
using namespace std;
class Solution
{
    int indegree[2000];
public:
    vector<int> topSort(int numCourses, vector<vector<int>>& graph)
    {
        vector<int>result;
        queue<int>q;
        for(int i=0; i<numCourses; i++)
            if(indegree[i]==0)
                q.push(i);

        while(!q.empty())
        {
            int x = q.front();
            q.pop();
            result.push_back(x);

            for(int i=0; i<graph[x].size(); i++)
            {
                int val = graph[x][i];
                indegree[val]--;
                if(indegree[val]==0)
                    q.push(val);
            }
        }
        return result.size()==numCourses ? result:vector<int>();
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)
    {
        vector<vector<int>>graph(numCourses);
        memset(indegree, 0, sizeof(indegree));
        for(auto x:prerequisites)
        {
            cout<<x[1]<<" "<<x[0]<<"\n";
            graph[x[1]].push_back(x[0]);
            indegree[x[0]]++;
        }
        cout<<" f"<<"\n";
        return topSort(numCourses, graph);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec =
    {
        {1,0},
        {2,0},
        {3,1},
        {3,2}
    };
    vector<int>a = obj.findOrder(4,vec);
    for(auto x:a)
        cout<<x<<" ";
}

