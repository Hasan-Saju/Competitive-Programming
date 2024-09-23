#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int leastInterval(vector<char>& tasks, int n)
    {
        priority_queue<int>pq;
        queue<pair<int, int> >q;
        map<char, int>mp;
        for(auto x:tasks)
            mp[x]++;

        for(auto x:mp)
            pq.push(x.second);

        int time = 1;
        while(!(pq.empty() && q.empty()))
        {
            if(!pq.empty())
            {
                if(pq.top()>1)
                    q.push(make_pair(pq.top()-1, time+n));
                pq.pop();
            }

            pair<int, int> temp = q.front();
            if(temp.second == time )
            {
                q.pop();
                pq.push(temp.first);
            }

            time++;
        }
        time--;

        return time;

    }
};

int main()
{
    Solution obj;
    vector<char>vec = {'A','A','A','B','B','B',};
    cout<<obj.leastInterval(vec, 2);
}


