#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries)
    {
        vector<pair<int,int>>v;
        for(int i=0; i<queries.size(); i++)
        {
            v.push_back({queries[i], i});
        }

        sort(intervals.begin(), intervals.end());
        sort(v.begin(), v.end());
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        int j=0;
        map<int,int>mp;
        vector<int>ans;

        for(int i=0; i<queries.size(); i++)
        {
            int val = v[i].first;
            int ind = v[i].second;

            while(j<intervals.size() and intervals[j][0]<=val)
            {
                int sz = intervals[j][1] - intervals[j][0] + 1;
                int endd = intervals[j][1];
                pq.push({sz,endd});
                j++;
            }

            while(pq.size() and pq.top().second<val)
                pq.pop();

            mp[ind] = pq.size()? pq.top().first : -1;
            //cout<<ind<<" "<<mp[ind]<<endl;
        }

        for(auto m:mp)
            ans.push_back(m.second);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = { {2,3},{2,5},{1,8},{20,25} };
    vector<int>v = {2,9,5,22};
    obj.minInterval(vec, v);
}
