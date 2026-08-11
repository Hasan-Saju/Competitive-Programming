#include<bits/stdc++.h>
using namespace std;
class Solution
{
    int pr[1005];

public:
    void makeset(int n)
    {
        for(int i=1; i<=n; i++)
            pr[i] = i;
    }
    int Find(int r)
    {
        if(pr[r]==r)
            return r;

        return pr[r] = Find(pr[r]);
    }

    int Union(int a, int b)
    {
        int x = Find(a);
        int y = Find(b);

        if(x==y)
            return true;
        else
        {
            pr[y] = x;
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges)
    {
        makeset(edges.size());
        for(auto x:edges)
            if(Union(x[0], x[1]))
                return x;

        return vector<int> {};
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {1,2}, {1,3}, {2,3} };
    obj.findRedundantConnection(vec);
}

