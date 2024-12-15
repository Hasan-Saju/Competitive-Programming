#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> findItinerary(vector<vector<string>>& tickets)
    {
        unordered_map<string, vector<string>> adj;
        unordered_map<string, vector<bool>> used; // Track used edges for each source

        // Sort tickets lexicographically
        sort(tickets.begin(), tickets.end());

        // Build the adjacency list
        for (auto& ticket : tickets)
        {
            adj[ticket[0]].push_back(ticket[1]);
            used[ticket[0]].push_back(false); // Initialize used status for each edge
        }

        vector<string> res;
        res.push_back("JFK");

        // Perform DFS
        dfs("JFK", adj, used, res, tickets.size() + 1);

        return res;
    }

private:
    bool dfs(const string& src, unordered_map<string, vector<string>>& adj,
             unordered_map<string, vector<bool>>& used, vector<string>& res, int ansLen)
    {
        if (res.size() == ansLen)
            return true;

        if (adj.find(src) == adj.end())
            return false;

        for (int i = 0; i < adj[src].size(); ++i)
        {
            if (used[src][i]) // Skip already used edges
                continue;

            string airport = adj[src][i];
            used[src][i] = true; // Mark the edge as used
            res.push_back(airport);

            if (dfs(airport, adj, used, res, ansLen))
                return true;

            // Backtrack: undo changes
            used[src][i] = false;
            res.pop_back();

            // Optimization: Skip subsequent edges with the same source and destination
            while (i + 1 < adj[src].size() && adj[src][i] == adj[src][i + 1])
                ++i;
        }
        return false;
    }
};

int main()
{
    Solution obj;
    vector<vector<string>>vec = {{"MUC","LHR"},{"JFK","MUC"},{"SFO","SJC"},{"LHR","SFO"}};
    vector<string> ans = obj.findItinerary(vec);
    for(auto x:ans)
        cout<<x<<" -> ";
}

