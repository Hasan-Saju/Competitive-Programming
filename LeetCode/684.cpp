#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pr[1005];
    void makeSet()
    {
        for(int i=0; i<1005; i++)
            pr[i] = i;
    }

    int Find(int rep)
    {
        if(pr[rep]==rep)
            return rep;
        return pr[rep] = Find(pr[rep]);
    }

    int Union(int a, int b)
    {
        int u = Find(a);
        int v = Find(b);

        if(u==v)
            return 1;
        else
            pr[u] = v;

        return 0;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        makeSet();
        for(auto x: edges)
        {
            int ans = Union(x[0], x[1]);
            if(ans)
             return x;
        }
        return vector<int>();
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,2},{2,3},{3,4}, {1,4},{1,5}};
    obj.findRedundantConnection(vec);
}
