#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> topSort(int n, vector<vector<int>>& field, vector<int>indegree)
    {
        queue<int>Q;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            if(!indegree[i])
            {
                Q.push(i);
                ans.push_back(i);
            }
        }

        while(!Q.empty())
        {
            int x =  Q.front();
            Q.pop();

            for(int i=0; i<field[x].size(); i++)
            {
                indegree[field[x][i]]--;
                if(indegree[field[x][i]]==0)
                {
                    Q.push(field[x][i]);
                    ans.push_back(field[x][i]);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph)
    {
        vector<vector<int>>field(10005);
        vector<int>indegree(10005,0);

        for(int i=0; i<graph.size(); i++)
        {
            for(int j=0; j<graph[i].size(); j++)
            {
                field[graph[i][j]].push_back(i);
                indegree[i]++;
            }
        }
        return topSort(graph.size(), field, indegree);
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,2},{2,3},{5},{0},{5},{},{}};
    vector<int>a = obj.eventualSafeNodes(vec);
    for(auto x:a)
        cout<<x<<" ";
}
