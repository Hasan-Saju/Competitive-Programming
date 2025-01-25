#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minReorder(int n, vector<vector<int>>& connections)
    {
        vector<vector<pair<int, int>>>adj(n);
        for(auto con: connections)
        {
            adj[con[0]].push_back({con[1], 1});
            adj[con[1]].push_back({con[0], 0});
        }

        int ans=0;
        vector<int>visit(n);
        visit[0]=1;
        queue<int>Q;
        Q.push(0);

        while(!Q.empty())
        {
            int current = Q.front();
            Q.pop();

            for(auto [dest, val]:adj[current])
            {
                if(!visit[dest])
                {
                    visit[dest] = 1;
                    Q.push(dest);
                    ans += val;
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{0,1},{1,3},{2,3},{4,0},{4,5}};
    cout<<obj.minReorder(6, vec);
}

