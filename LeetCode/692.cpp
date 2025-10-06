#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:

struct Compare {
    bool operator()(const pair<int,string>& a, const pair<int,string>& b) {
        if (a.first == b.first)
            return a.second > b.second; // increasing order for string
        return a.first < b.first;       // decreasing order for int
    }
};

    vector<string> topKFrequent(vector<string>& words, int k)
    {
        map<string, int>mp;
        for(auto w:words)
            mp[w]++;

        priority_queue<pair<int,string>, vector<pair<int,string>>, Compare> pq;
        for(auto ele:mp)
        {
            pq.push(make_pair(ele.second, ele.first));
        }

        vector<string>ans;
        vector<string>t;

        pair<int, string> temp = pq.top();
        while(!pq.empty() and k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"i","love","leetcode","i","love","coding"};
    obj.topKFrequent(vec,2);
}

