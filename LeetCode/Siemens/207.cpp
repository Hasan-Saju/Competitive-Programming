#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int>graph[2005];
    int indegree[2005];
    //unordered_set<int>s;
    vector<int>ans;
public:
    void topsort(int courses)
    {
        queue<int>q;

        for(int i=0; i<courses; i++)
            if(indegree[i]==0)
                q.push(i);

        while(!q.empty())
        {
            int c = q.front();
            q.pop();
            //s.insert(c);
            ans.push_back(c);
            cout<<c<<" ";
            for(int i=0; i<graph[c].size(); i++)
            {
                indegree[graph[c][i]]--;
                if(indegree[graph[c][i]]==0)
                {
                    q.push(graph[c][i]);
                }
            }
        }
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)
    {

        memset(indegree, 0, sizeof(indegree));
        for(auto vec: prerequisites)
        {
            graph[vec[1]].push_back(vec[0]);
            indegree[vec[0]]++;
        }

        topsort(numCourses);

        return ans.size()!=numCourses ? vector<int> {}:
               ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,0}};
    obj.findOrder(2, vec);
}

