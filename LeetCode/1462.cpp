#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries)
    {
        vector<vector<bool>>adj(numCourses, vector<bool>(numCourses));

        for(auto vec: prerequisites)
            adj[vec[0]][vec[1]] = true;

        for(int k=0; k<numCourses; k++)
        {
            for(int i =0; i<numCourses; i++)
            {
                for(int j=0; j<numCourses; j++)
                {
                    adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
                }
            }
        }
        vector<bool> ans;
        for(auto q: queries)
            ans.push_back(adj[q[0]][q[1]]);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}

