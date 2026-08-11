#include<bits/stdc++.h>
using namespace std;
class Solution
{
    int pr[1005];
public:
    void makeSet()
    {
        for(int i=0; i<1005; i++)
            pr[i] = i;
    }

    int Find(int n)
    {
        if(pr[n]==n)
            return n;
        return pr[n] = Find(pr[n]);
    }

    int Union(int a, int b)
    {
        int x = Find(a);
        int y = Find(b);

        if(x==y)
            return 1;

        pr[y] = x;
        return 0;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges)
    {
        makeSet();
        for(auto edge: edges)
        {
            if(Union(edge[0], edge[1]))
                return edge;
        }

        return vector<int> {};
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {1,2}, {1,3}, {2,3} };
    vector<int>ans = obj.findRedundantConnection(vec);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}
