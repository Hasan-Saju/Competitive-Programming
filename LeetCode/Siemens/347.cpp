#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;

        for(auto x:nums)
            mp[x]++;

        for(auto m:mp)
            pq.push({m.second, m.first});

        vector<int>ans;
        while(k-- && !pq.empty())
        {
            ans.push_back(pq.top().second);
            //cout<<pq.top().second<<endl;
            pq.pop();
        }

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,1,1,2,3,2};
    obj.topKFrequent(vec,2);
}

