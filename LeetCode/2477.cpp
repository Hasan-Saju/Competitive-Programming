#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>>V;
    long long res = 0;

public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats)
    {
        int n = roads.size()+1;
        V.resize(n);

        for(auto r:roads)
        {
            V[r[0]].push_back(r[1]);
            V[r[1]].push_back(r[0]);
        }

        dfs(0, -1, seats);

        return res;
    }
private:
    int dfs(int node, int parent, int seats)
    {
        int passenger = 0;
        for(auto child:V[node])
        {
            if(child!=parent)
            {
                int p = dfs(child, node, seats);
                passenger+=p;
                res += ceil((double)p/seats);
            }
        }

        return passenger+1;
    }

};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{3,1},{3,2},{1,0},{0,4},{0,5},{4,6}};
    cout<<obj.minimumFuelCost(vec, 2);
}

