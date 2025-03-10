#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumDetonation(vector<vector<int>>& bombs)
    {
        vector<vector<int>>adj(bombs.size());

        for(int i=0; i<bombs.size(); i++)
        {
            int x1 = bombs[i][0], y1 = bombs[i][1], r1 = bombs[i][2];

            for(int j=i+1; j<bombs.size(); j++)
            {
                int x2 = bombs[j][0], y2 = bombs[j][1], r2 = bombs[j][2];
                long long dis = (long long)(x1-x2)*(x1-x2) + (long long) (y1-y2)*(y1-y2);

                if(dis<=(long long)r1*r1)
                    adj[i].push_back(j);
                if(dis<=(long long)r2*r2)
                    adj[j].push_back(i);
            }
        }


        int ans = INT_MIN;

        for(int i=0; i<bombs.size(); i++)
        {
            vector<int>vis(bombs.size(), 0);
            queue<int>Q;
            Q.push(i);
            int kount = 1;
            vis[i] = 1;

            while(!Q.empty())
            {
                int f = Q.front();
                Q.pop();
                for(auto n:adj[f])
                {
                    if(!vis[n])
                    {
                        vis[n] = 1;
                        kount++;
                        Q.push(n);
                    }
                }
            }

            ans = max(ans, kount);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{2,1,3},{6,1,4}};
    cout<<obj.maximumDetonation(vec);
}

