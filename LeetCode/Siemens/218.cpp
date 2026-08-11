#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<pair<int,int>>edges;

        for(auto b:buildings)
        {
            edges.push_back({b[0], -b[2]});
            edges.push_back({b[1], b[2]});
        }

        sort(edges.begin(), edges.end());
        multiset<int>live;
        live.insert(0);
        int prev=0;
        vector<vector<int>>ans;

        for(auto [x,h]:edges)
        {
            if(h<0)
                live.insert(abs(h));
            else
                live.erase( live.find(h) );

            int cur = *live.rbegin();
            if(cur!=prev)
            {
                ans.push_back({x,cur});
                prev = cur;
            }
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {0,2,3}, {2,5,3} };
    obj.getSkyline(vec);
}

