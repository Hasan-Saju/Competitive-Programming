#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs)
    {
        unordered_map<int, vector<int> > u;
        unordered_set<int>visited;

        vector<int>result;

        for(auto a: adjacentPairs)
        {
            u[a[0]].push_back(a[1]);
            u[a[1]].push_back(a[0]);
        }

        int head = 0;

        for(auto k : u )
        {

                //cout<<k.first;
                if(u[k.first].size()==1)
                {
                    head=k.first;
                    break;
                }

        }

        queue<int>q;
        q.push(head);

        while(!q.empty())
        {
            int p=q.front();
            q.pop();

            if(visited.count(p))
                continue;

            result.push_back(p);
            visited.insert(p);

            for(auto t:u[p])
            {
                q.push(t);
            }
        }
        return result;

    }
};

int main()
{
    Solution obj;
    vector<vector<int>> vec
    {
        {2, 1},
        {3, 4},
        {3, 2}
    };
    obj.restoreArray(vec);
}




