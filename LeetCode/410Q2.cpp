#include<bits/stdc++.h>
using namespace std;

const int N=100005;
vector<int>V[N];
bool vis[N];
int child[N];


class Solution
{

    void dfs(int s)
    {
        vis[s]=true;
        for(auto x:V[s])//v[s] er prottek ta element ektar por ekta x a ashte thakbe
        {
            if(vis[x]==true)
                continue;
            dfs(x);
        }

    }

public:
    int countGoodNodes(vector<vector<int>>& edges)
    {
        for(auto x:edges)
        {
                V[x[0]].push_back(x[1]);
                V[x[1]].push_back(x[0]);
        }
        dfs(0)
        return 0;

    }
};

int main()
{
    Solution obj;
    vector<vector<int> >vec = {{0,1},{0,2},{1,3},{1,4},{2,5},{2,6}};
    cout<<obj.countGoodNodes(vec);
}
