#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges)
    {
        if(n==1)
            return {0};
        vector<vector<int>>graph(n);
        for(auto edge:edges)
        {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }

        vector<int>edge_cnt(n,0);
        queue<int>leaves;
        //cout<<"test\n";
        for(int i=0; i<n; i++)
        {
            edge_cnt[i] = graph[i].size();
            if(edge_cnt[i]==1)
                leaves.push(i);
        }

        //cout<<"ok\n";
        while(!leaves.empty())
        {
            if(n<=2)
            {
                vector<int>ans;
                while(!leaves.empty())
                {
                    ans.push_back(leaves.front());
                    leaves.pop();
                }
                return ans;
            }

            int sizee = leaves.size();
            for(int i=0; i<sizee; i++)
            {
                int x = leaves.front();
                leaves.pop();
                --n;

                for(auto n:graph[x])
                {
                    edge_cnt[n]--;
                    if(edge_cnt[n]==1)
                        leaves.push(n);
                }
            }
        }
        return {};
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,0},{0,2}};
    vector<int>ans = obj.findMinHeightTrees(3, vec);

    for(auto x:ans)
        cout<<x<<" ";
}

