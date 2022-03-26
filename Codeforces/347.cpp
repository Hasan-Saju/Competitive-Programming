#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int> > pq;
        vector<int>result;

        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            pq.push(make_pair(x.second,x.first));
        }
        while(k--)
        {
            pair<int, int> f = pq.top();
            result.push_back(f.second);
            cout<<f.second<<" ";
            pq.pop();
        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {3,0,1,0};
    obj.topKFrequent(vec,1);
}





