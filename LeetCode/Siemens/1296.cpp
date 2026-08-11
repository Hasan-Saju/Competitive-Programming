#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossibleDivide(vector<int>& nums, int k)
    {
        unordered_map<int, int>mp;
        priority_queue<int>pq;

        if(nums.size()%k)
            return false;

        for(auto x:nums )
        {
            mp[x]++;
        }

        for(auto [key, val]:mp)
            pq.push(key);

        while(!pq.empty())
        {
            int top = pq.top();

            for(int val=top; val>top-k; val--)
            {
                if(mp.find(val)!=mp.end() and mp[val])
                {
                    mp[val]--;

                    if(mp[val]==0 and pq.top()==val)
                        pq.pop();
                }
                else
                    return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {4,3,3,4,1,2,2,4};
    cout<<obj.isPossibleDivide(vec, 4);
}


