#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries)
    {
        vector<pair<int,int>> q;
        for(int j=0;j<queries.size();j++)
            q.push_back(make_pair(queries[j],j));

        sort(q.begin(), q.end());
        sort(intervals.begin(), intervals.end());
        int i=0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> mnHeap;
        map<int, int>ans;
        vector<int> result;

        for(auto temp:q)
        {
            int val =temp.first;
            int originalInd =  temp.second;

            while(i<intervals.size() and intervals[i][0]<=val)
            {
                mnHeap.push(make_pair(intervals[i][1]-intervals[i][0]+1, intervals[i][1]));
                i++;
            }
            while(mnHeap.size() and mnHeap.top().second<val)
                mnHeap.pop();

            ans[originalInd] = mnHeap.size() ? mnHeap.top().first : -1;
        }

        for(auto x: ans)
            result.push_back(x.second);
        return result;
    }
};

int main()
{
    Solution obj;
    vector<vector<int> >v = {{2,3},
        {2,5},
        {
            1,8
        },
        {
            20,25
        }
    };
    vector<int>target = {2,19,5,22};
    vector<int>a  =  obj.minInterval(v, target);
    for(auto x:a)
        cout<<x<<" ";
}
