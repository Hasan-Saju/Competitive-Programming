#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int leastInterval(vector<char>& tasks, int n)
    {
        map<char, int>mp;
        for(auto x:tasks)
            mp[x]++;

        priority_queue<int>pq;
        for(auto x:mp)
            pq.push(x.second);

        queue<pair<int, int>>q;
        int time =1;

        while(!(pq.empty() and q.empty()))
        {
            cout<<time<<endl;

            if(!pq.empty() and pq.top()>1)
                q.push({pq.top()-1, time+n});

            if(!pq.empty())
                pq.pop();


            if(time==q.front().second)
            {
                pq.push(q.front().first);
                q.pop();
            }

            time++;
        }

        return time-1;
    }
};
int main()
{
    Solution obj;
    vector<char>vec = {'A', 'A', 'A','B', 'B', 'B'};
    cout<<obj.leastInterval(vec, 2);
}

