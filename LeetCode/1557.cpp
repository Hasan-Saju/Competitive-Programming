#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>indegree(n,0);
        for(auto edge:edges)
            indegree[edge[1]]++;
        vector<int>ans;
        for(int i=0; i<n; i++)
            if(!indegree[i])
                ans.push_back(i);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,1},{0,2},{2,5},{3,4},{4,2}};
    obj.findSmallestSetOfVertices(6, vec);
}

