#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> getOrder(vector<vector<int>>& tasks)
    {
        vector<int> ans;

        for(int i=0; i<tasks.size(); i++)
            tasks[i].push_back(i);
        sort(tasks.begin(), tasks.end());

        priority_queue<array<int, 2>, vector<array<int,2>>, greater<>>minHeap;
        long long time = tasks[0][0];
        int i=0;
        while(!minHeap.empty() || i<tasks.size())
        {
            while(i<tasks.size() and tasks[i][0]<=time)
            {
                minHeap.push({tasks[i][1], tasks[i][2]});
                i++;
            }

            if(minHeap.empty())
                time = tasks[i][0];
            else
            {
                auto [exec, ind] = minHeap.top();
                minHeap.pop();
                time+=exec;
                ans.push_back(ind);
            }

        }
        return ans;
    }
};


int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,2},{2,4},{3,2},{4,1}};
    vector<int> a = obj.getOrder(vec);
    for(auto x:a)
        cout<<x<<" ";
}

