#include<bits/stdc++.h>
using namespace std;
class Solution
{
    vector<int>vis;
private:
    double dfs(int s, int t, map<pair<int, int>, double>& cost, vector<vector<int>>& graph)
    {
        vis[s] = 1;
        if(s==t)
            return 1.0;
        for(auto x: graph[s])
        {
            if(!vis[x])
            {
                double subResult = dfs(x, t, cost, graph);
                if (subResult != -1.0)
                {
                    return cost[ {s,x}] * subResult;
                }

            }
        }
        return -1.0;
    }
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries)
    {
        map<string, int>mp;
        map<pair<int, int>, double>cost;
        vector<vector<int>>graph;
        graph.resize(40);

        int proxy = 0;
        for(int i=0; i<equations.size(); i++)
        {
            cout<<proxy<<" \n";
            auto eq = equations[i];
            if(mp.find(eq[0])==mp.end())
            {
                mp[eq[0]] = proxy;
                proxy++;
            }


            if(mp.find(eq[1])==mp.end())
            {
                mp[eq[1]] = proxy;
                proxy++;
            }

            graph[mp[eq[0]]].push_back(mp[eq[1]]);
            graph[mp[eq[1]]].push_back(mp[eq[0]]);

            cost[ {mp[eq[0]], mp[eq[1]]}] = values[i];
            cost[ {mp[eq[1]], mp[eq[0]]}] = 1/values[i];
        }

        cout<<"end\n";
        vector<double>res;
        vis.resize(mp.size(), 0);
        for(auto q: queries)
        {
            cout<<"here \n";
            double ans;
            if(mp.find(q[0])==mp.end() or mp.find(q[1])==mp.end())
                ans = -1.0;
            else
            {
                vis.assign(mp.size(), 0);
                ans = dfs(mp[q[0]], mp[q[1]], cost, graph);
            }
            res.push_back(ans);
        }
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    vector<vector<string>>equations = {{"x1","x2"},{"x2","x3"},{"x3","x4"},{"x4","x5"}};
    vector<double>values = {3.0,4.0,5.0,6.0};
    vector<vector<string>> queries = {{"x2","x4"}};
    vector<double>ans = obj.calcEquation(equations, values, queries);

    for(auto x:ans)
        cout<<x<<" ";
}

